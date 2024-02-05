/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <brmajor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 14:47:19 by brmajor           #+#    #+#             */
/*   Updated: 2023/12/07 13:01:33 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <sstream>
#include <iomanip>

class Contact
{
private:
	std::string	_first_name;	
	std::string	_last_name;
	std::string	_nickname;
	std::string	_phone_number;
	std::string	_secret;

public:
	std::string getFN() const;
	std::string getLN() const;
	std::string getNN() const;
	std::string getPN() const;
	std::string getS() const;
	Contact(const std::string fn, const std::string ln, const std::string nn, const std::string pn, const std::string s);
	Contact();
};

class Phonebook
{
private:
	Contact	_contact[8];
	int		_numcontacts;
public:
	Phonebook();
	void	addContact();
	void	searchContact();
};
