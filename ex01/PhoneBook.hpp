/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timanish <timanish@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 16:04:28 by timanish          #+#    #+#             */
/*   Updated: 2025/01/14 16:06:45 by timanish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "contact.hpp"
# include <iostream>
# include <string>

class PhoneBook
{
	private:
		Contact	contacts[8];
		int		index;
	
	public:
		PhoneBook();
		void	addContact();
		void	searchContact();
		void	printformat(std::string &str);
};
#endif