/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medalgic <medalgic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:17:08 by medalgic          #+#    #+#             */
/*   Updated: 2024/02/19 17:17:10 by medalgic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
int main(int ac, char **av)
{
	int i = 0;
	int j = 1;

	if(ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while(av[j])
	{
		i = 0;
		while(av[j][i])
		{
			if(av[j][i] <= 'z' && av[j][i] >= 'a')
				av[j][i] -= 32;
			std::cout << av[j][i];
			i++;
		}
		j++;
	}
	std::cout << std::endl;
}