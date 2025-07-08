/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timanish <timanish@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 16:51:45 by timanish          #+#    #+#             */
/*   Updated: 2025/07/07 21:04:27 by timanish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook()
{
    contactCount = 0;
}

void PhoneBook::addContact()
{
    int index = contactCount % 8;
    if (contacts[index].setContact() == ERROR)
        return;
    contactCount++;
    std::cout << "保存完了（スロット " << index << "）" << std::endl;
}

void PhoneBook::searchContact() const
{
    if (contactCount == 0)
    {
        std::cout << "連絡先が登録されていません。" << std::endl;
        return;
    }
    std::cout << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name" << "|"
              << std::setw(10) << "Nickname" << std::endl;

    for (int i = 0; i < std::min(contactCount, 8); i++)
        contacts[i].displayShort(i);
    std::cout << "表示したい連絡先のインデックス番号を入力: ";
    std::string input;
    std::getline(std::cin, input);
    if (input.length() == 1 && std::isdigit(input[0]))
    {
        int index = input[0] - '0';
        if (index >= 0 && index < std::min(contactCount, 8))
            contacts[index].displayFull();
        else
            std::cout << "無効なインデックス" << std::endl;
    }
    else
        std::cout << "無効な入力" << std::endl;
}