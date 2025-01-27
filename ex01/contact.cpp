/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timanish <timanish@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 15:16:27 by timanish          #+#    #+#             */
/*   Updated: 2025/01/14 16:39:22 by timanish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

void	Contact::setFirstName(std::string& firstName)
{
	this->firstName = firstName;
}
void	Contact::setLastName(std::string& lastName)
{
	this->lastName = lastName;
}
void	Contact::setNickname(std::string& nickname)
{
	this->nickname = nickname;
}
void	Contact::setPhoneNumber(std::string& phoneNumber)
{
	this->phoneNumber = phoneNumber;
}
void	Contact::setDarkestSecret(std::string& secret)
{
	this->darkestSecret = secret;
}

std::string	Contact::getFirstName()
{
	return (this->firstName);
}
std::string	Contact::getLastName()
{
	return (this->lastName);
}
std::string	Contact::getNickname()
{
	return (this->nickname);
}
std::string	Contact::getPhoneNumber()
{
	return (this->phoneNumber);
}
std::string	Contact::getDarkestSecret()
{
	return (this->darkestSecret);
}
