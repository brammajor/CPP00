/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brmajor <brmajor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 15:53:41 by brmajor           #+#    #+#             */
/*   Updated: 2023/12/07 13:02:41 by brmajor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Contact::Contact()
{
}

Contact::Contact(const std::string fn, const std::string ln, const std::string nn, const std::string pn, const std::string s)
{
	this->_first_name = fn;
	this->_last_name = ln;
	this->_nickname = nn;
	this->_phone_number = pn;
	this->_secret = s;
}

std::string Contact::getFN() const
{
	return (this->_first_name);
}

std::string Contact::getLN() const
{
	return (this->_last_name);
}

std::string Contact::getNN() const
{
	return (this->_nickname);
}

std::string Contact::getPN() const
{
	return (this->_phone_number);
}

std::string Contact::getS() const
{
	return (this->_secret);
}
