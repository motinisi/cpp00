/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nisi <nisi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 15:16:27 by timanish          #+#    #+#             */
/*   Updated: 2025/04/29 16:22:31 by nisi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include <iostream>
#include <iomanip>

bool isValidPhoneNumber(const std::string& phoneNumber)
{
    for (size_t i = 0; i < phoneNumber.length(); ++i)
    {
        char c = phoneNumber[i];
        if (!std::isdigit(c) && c != '+' && c != '-' && c != ' ')
            return false;
    }
    return true;
}

int Contact::setContact() 
{
    std::cout << "First name: ";
    std::getline(std::cin, firstName);
    std::cout << "Last name: ";
    std::getline(std::cin, lastName);
    std::cout << "Nickname: ";
    std::getline(std::cin, nickname);
    std::cout << "Phone number: ";
    std::getline(std::cin, phoneNumber);
    std::cout << "Darkest secret: ";
    std::getline(std::cin, darkestSecret);

    if (firstName.empty() || lastName.empty() || nickname.empty() ||
        phoneNumber.empty() || darkestSecret.empty())
    {
        std::cout << "\n入力が正しくありません。" << std::endl;
        return ERROR;
    }
    if (!isValidPhoneNumber(phoneNumber))
    {
        std::cout << "\n電話番号が正しくありません。" << std::endl;
        return ERROR;
    }
    return 0;
}

static std::string formatField(const std::string& str)
{
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    else
        return std::string(10 - str.length(), ' ') + str;
}

void Contact::displayShort(int index) const
{
    std::cout << std::setw(10) << index << "|"
              << formatField(firstName) << "|"
              << formatField(lastName) << "|"
              << formatField(nickname) << std::endl;
}

void Contact::displayFull() const
{
    std::cout << "First name: " << firstName << std::endl;
    std::cout << "Last name: " << lastName << std::endl;
    std::cout << "Nickname: " << nickname << std::endl;
    std::cout << "Phone number: " << phoneNumber << std::endl;
    std::cout << "Darkest secret: " << darkestSecret << std::endl;
}

