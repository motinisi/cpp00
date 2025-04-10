/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nisi <nisi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 16:51:45 by timanish          #+#    #+#             */
/*   Updated: 2025/04/10 15:46:04 by nisi             ###   ########.fr       */
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
    contacts[index].setContact();
    contactCount++;
    std::cout << "連絡先を保存しました（スロット " << index << "）" << std::endl;
}

void PhoneBook::searchContact() const
{
    if (contactCount == 0)
    {
        std::cout << "まだ連絡先が登録されていません。" << std::endl;
        return;
    }
    std::cout << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name" << "|"
              << std::setw(10) << "Nickname" << std::endl;

    for (int i = 0; i < std::min(contactCount, 8); i++)
        contacts[i].displayShort(i);
    std::cout << "表示したい連絡先のインデックス番号を入力してください: ";
    std::string input;
    std::getline(std::cin, input);
    if (input.length() == 1 && std::isdigit(input[0]))
    {
        int index = input[0] - '0';
        if (index >= 0 && index < std::min(contactCount, 8))
            contacts[index].displayFull();
        else
            std::cout << "有効なインデックスではありません。" << std::endl;
    }
    else
        std::cout << "無効な入力です。" << std::endl;
}