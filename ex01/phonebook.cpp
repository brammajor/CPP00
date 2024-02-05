/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <brmajor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 15:44:30 by brmajor           #+#    #+#             */
/*   Updated: 2023/12/07 13:47:51 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Phonebook::Phonebook()
{
	this->_numcontacts = 0;
}

void	Phonebook::addContact()
{
	std::string traits[5];
	std::string print[5] = {"\nFirst name:", "Last name:", "Nickname:",
		"Phone number:", "Darkest secret:"};
	for (int i = 0; i < 5; i++)
	{
		std::cout << print[i];
		std::getline(std::cin, traits[i]);
	}
	std::cout << std::endl;
	this->_contact[this->_numcontacts % 8] = Contact(traits[0], traits[1],
			traits[2], traits[3], traits[4]);
	this->_numcontacts++;
	if (this->_numcontacts == 16)
		this->_numcontacts = 8;
}

void	Phonebook::searchContact()
{
	if (this->_numcontacts == 0)
	{
		std::cout << std::endl << "You have no contacts." << std::endl << std::endl;
		return ;
	}
	for (int i = 0; i < _numcontacts && i < 8; i++)
	{
		std::cout << std::endl;
		std::cout << std::setw(10) << i << "|" << std::flush;
		std::string tmp = this->_contact[i].getFN();
		if (tmp.length() > 10)
		{
			tmp = tmp.substr(0,9);
			tmp.append(".");
		}
		std::cout << std::setw(10) << tmp << "|" << std::flush;
		tmp = this->_contact[i].getLN();
		if (tmp.length() > 10)
		{
			tmp = tmp.substr(0,9);
			tmp.append(".");
		}
		std::cout << std::setw(10) << tmp << "|" << std::flush;
		tmp = this->_contact[i].getNN();
		if (tmp.length() > 10)
		{
			tmp = tmp.substr(0,9);
			tmp.append(".");
		}
		std::cout << std::setw(10) << tmp << "|" << std::flush;
	}
	std::string index;
	std::cout << std:: endl << std::endl << "Enter the index of the contact:";
	std::getline(std::cin, index);
	std::cout << std::endl;

	std::stringstream ss(index);
	int	i;
	ss >> i;
	if (ss.fail() || i < 0 || i > 7)
   	{
 		std::cout << "Invalid input. Please enter a number from 0 to 7." << std::endl << std::endl;
		return ;
   	}
	if (i < this->_numcontacts && i < 8)
	{
		std::cout << "First name: " << this->_contact[i].getFN() << std::endl;
		std::cout << "Last name: " << this->_contact[i].getLN() << std::endl;
		std::cout << "Nickname: " << this->_contact[i].getNN() << std::endl;
		std::cout << "Phone number: " << this->_contact[i].getPN() << std::endl;
		std::cout << "Darkest secret: " << this->_contact[i].getS() << std::endl << std::endl;
		return ;
	}
}
