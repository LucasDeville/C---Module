/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:25:03 by ldeville          #+#    #+#             */
/*   Updated: 2023/11/22 11:24:46 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

int	findComplain(std::string str, Harl& h) { 

	for (int i = 0; i < 4; i++)
		if (str == h.type[i])
			return (i);
	return (-1);
}

void	harlComplain(std::string str) {
	Harl h;
	switch (findComplain(str, h))
	{
		case 0:
			h.complain("DEBUG");
		case 1:
			h.complain("INFO");
		case 2:
			h.complain("WARNING");
		case 3:
			h.complain("ERROR");
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}

int	main(int argc, char **argv) {
	
	if (argc != 2)
	{
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		return (0);
	}
	harlComplain(argv[1]);	

	return (0);
}