/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 10:48:03 by ldeville          #+#    #+#             */
/*   Updated: 2023/10/18 13:55:58 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "common.hpp"


int check_read(char *str)
{
	if (strcmp(str, "ADD") == 0)
		return (1);
	else if (strcmp(str, "SEARCH") == 0)
		return (2);
	else if (strncmp(str, "EXIT", 4) == 0)
		return (0);
	return (-1);
}

int	main(void)
{
	int			exit;
	std::string	read;
	PhoneBook	Phonebook;

	exit = 0;
	while (exit)
	{
		std::cin >> read;
		exit = check_read(read);
		if (exit == -1)
			std::cout << "Please enter a valid command : ADD, SEARCH or EXIT." << std::endl;
		else if (exit == 1)
			Phonebook.add_contact();
		else
			Phonebook.search_contact();
	}
	return (0);
}
