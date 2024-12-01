/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medalgic <medalgic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:16:56 by medalgic          #+#    #+#             */
/*   Updated: 2024/02/19 17:16:59 by medalgic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <string> 
#include <iomanip>

class PhoneBook
{
	private:
		Contact cont[8];
	public:
		void add(void);
		void search(void);
};


#endif