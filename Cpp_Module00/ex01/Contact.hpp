/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medalgic <medalgic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:16:13 by medalgic          #+#    #+#             */
/*   Updated: 2024/02/19 17:16:15 by medalgic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact {
	private:
		std::string Firstname;
		std::string LastName;
		std::string NickName;
		std::string Number;
		std::string Secred;
	public:
		void setfirstname(std::string);
		void setlastname(std::string);
		void setnickname(std::string);
		void setnumber(std::string);
		void setsecred(std::string);

		std::string getfirstname(void);
		std::string getlastname(void);
		std::string getnickname(void);
		std::string getnumber(void);
		std::string getsecred(void);

		std::string charlimited(std::string);
};

#endif