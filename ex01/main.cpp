/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nisi <nisi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 16:22:15 by timanish          #+#    #+#             */
/*   Updated: 2025/04/10 15:46:28 by nisi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <string>

int main()
{
    PhoneBook phoneBook;
    std::string command;

    std::cout << "=== My Awesome PhoneBook ===" << std::endl;

    while (true)
	{
        std::cout << "\nコマンドを入力してください（ADD, SEARCH, EXIT）: ";
        std::getline(std::cin, command);

        if (std::cin.eof())
		{
            std::cout << "\n入力が終了されました。終了します。" << std::endl;
            break;
        }

        if (command == "ADD")
            phoneBook.addContact();
		else if (command == "SEARCH")
            phoneBook.searchContact();
		else if (command == "EXIT")
		{
            std::cout << "終了" << std::endl;
            break;
        }
		else
            std::cout << "無効なコマンドです。" << std::endl;
    }

    return 0;
}
