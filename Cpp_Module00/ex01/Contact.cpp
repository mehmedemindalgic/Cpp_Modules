/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medalgic <medalgic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:16:21 by medalgic          #+#    #+#             */
/*   Updated: 2024/02/19 17:16:22 by medalgic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string Contact::charlimited(std::string str)
{
	if(str.length() >= 10)
		return(str.substr(0,9) + ".");
	return(str);
}

void Contact::setfirstname(std::string name)
{
	Firstname = name;
}

void Contact::setlastname(std::string name)
{
	LastName = name;
}

void Contact::setnumber(std::string name)
{
	Number = name;
}

void Contact::setsecred(std::string name)
{
	Secred = name;
}

void Contact::setnickname(std::string name)
{
	NickName = name;
}



std::string Contact::getfirstname(void)
{
	return(Firstname);
}

std::string Contact::getlastname(void)
{
	return(LastName);
}

std::string Contact::getnickname(void)
{
	return(NickName);
}

std::string Contact::getnumber(void)
{
	return(Number);
}

std::string Contact::getsecred(void)
{
	return(Secred);
}
