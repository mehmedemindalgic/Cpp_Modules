/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medalgic <medalgic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:16:51 by medalgic          #+#    #+#             */
/*   Updated: 2024/02/19 17:16:53 by medalgic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook::add(void)
{
	static int i;
	if(i == 8)
		i = 0;
	std::string name;

	do
	{
		std::cout << "FirstName: ";  
		std::getline(std::cin, name);
		cont[i].setfirstname(name);
		if(name.empty())
			std::cout << "FirstName Cannot Ne Empty" << std::endl;
	}while (name.empty());

	do
	{
		std::cout << "LastName: ";
		std::getline(std::cin, name);
		cont[i].setlastname(name);
		if(name.empty())
			std::cout << "LastName Cannot Ne Empty" << std::endl;
	} while (name.empty());

	do
	{
		std::cout << "NickName: ";  
		std::getline(std::cin, name);
		cont[i].setnickname(name);
		if(name.empty())
			std::cout << "NickName Cannot Ne Empty" << std::endl;
	} while (name.empty());

	do
	{
		std::cout << "Number: ";  
		std::getline(std::cin, name);
		cont[i].setnumber(name);
		if(name.empty())
				std::cout << "Number Cannot Ne Empty" << std::endl;
	}while (name.empty());

	do
	{
		std::cout << "Secret: ";  
		std::getline(std::cin, name);
		cont[i].setsecred(name);
		if(name.empty())
				std::cout << "Secret Cannot Ne Empty" << std::endl;
	} while (name.empty());
	
	i++;
}

void PhoneBook::search()
{
	if(!(cont[0].getfirstname().empty()))
	{
		int a;
		std::string tmp;
		int c = 0;
		std::string name;
		
		while(c != 8)
		{
			if(!(cont[c].getfirstname().empty()))
			{
				std::cout <<"--------------------------------------------"<< std::endl;
				std::cout << "|" << std::setw(5) << c + 1 << std::setw(5);
				std::cout << "|" << std::setw(10) << cont[c].charlimited(cont[c].getfirstname());
				std::cout << "|" << std::setw(10) << cont[c].charlimited(cont[c].getlastname());
				std::cout << "|" << std::setw(10) << cont[c].charlimited(cont[c].getnickname());
				std::cout << "|" << std::endl;
				std::cout <<"--------------------------------------------"<< std::endl;
				
			}
			c++;
		}
		std::cout <<"Number >> ";
		
		std::getline(std::cin, tmp);
		a = atoi(tmp.c_str());
		a--;

		if(a < 0 || a >= 8 || cont[a].getfirstname().empty())
		{
			std::cout <<"ERROR"<< std::endl;
			return;
		}
		else if(a >= 0 && a < 8)
		{
			
			std::cout <<"--------------------------"<< std::endl;
			std::cout << "| First name : ";
			std::cout << cont[a].getfirstname() << std::endl;

			std::cout <<"--------------------------"<< std::endl;
			std::cout <<"| Last name  : ";
			std::cout << cont[a].getlastname() << std::endl;

			std::cout <<"--------------------------"<< std::endl;
			std::cout <<"| Nick name  : ";
			std::cout << cont[a].getnickname() << std::endl;

			std::cout <<"--------------------------"<< std::endl;
			std::cout <<"| Number     : ";
			std::cout << cont[a].getnumber() << std::endl;
			std::cout <<"--------------------------"<< std::endl;

		}
	}
	else
	{
		std::cout << "****Phone Book Is Empty****"<< std::endl;
	}
	
}