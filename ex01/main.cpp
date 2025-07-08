/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timanish <timanish@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 16:22:15 by timanish          #+#    #+#             */
/*   Updated: 2025/07/07 21:11:23 by timanish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <string>

int main()
{
    PhoneBook phoneBook;
    std::string command;

    // std::cout << "=== My Awesome PhoneBook ===" << std::endl;
    while (true)
	{        
        std::cout << "\nコマンドを入力（ADD, SEARCH, EXIT）: ";
        std::getline(std::cin, command);
        if (std::cin.eof())
		{
            std::cout << "\nEOF" << std::endl;
            break;
        }
        if (command == "ADD")
            phoneBook.addContact();
		else if (command == "SEARCH")
            phoneBook.searchContact();
		else if (command == "EXIT")
		{
            std::cout << "EXIT" << std::endl;
            break;
        }
		else
            std::cout << "ADD or SEARCH or EXIT" << std::endl;
    }

    return 0;
}
