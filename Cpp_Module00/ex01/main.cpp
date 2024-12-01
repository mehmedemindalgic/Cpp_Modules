/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medalgic <medalgic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:16:26 by medalgic          #+#    #+#             */
/*   Updated: 2024/02/19 17:16:28 by medalgic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	PhoneBook phone;
	std::string input;

	while(input != "EXIT")
	{
		std::cout << "Available Commands: |ADD| |SEARCH| |EXIT| " << std::endl;
		std::cout << "Commands >> ";
		std::getline(std::cin, input);
		if(input == "ADD")
			phone.add();
		if(input == "SEARCH")
			phone.search();
		if(input == "EXIT")
			std::cout << "*********GOODBYE*********" << std::endl;
	}

} 