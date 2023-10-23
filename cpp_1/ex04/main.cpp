/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:25:03 by ldeville          #+#    #+#             */
/*   Updated: 2023/10/23 11:24:59 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void	replacer(char **argv, std::string text) {
	std::ofstream	file;
	size_t			pos;

	file.open(std::string(argv[1]) + ".replace");
	for (size_t i = 0; i < text.size(); i++)
	{
		pos = text.find(argv[2], i);
		if (pos && pos == i)
		{
			file << argv[3];
			i += std::string(argv[3]).size() - 1;
		}
		else
			file << text[i];
	}
	file.close();
}

int	main(int argc, char **argv) {
	std::ifstream	file;
	std::string		text;
	char			c;


	if (argc != 4)
	{
		std::cout << "Please enter a filename, and two strings." << std::endl;
		return (EXIT_FAILURE);
	}
	file.open(argv[1], std::fstream::in);
	if (!file)
	{
		std::cout << "The file " << argv[1] << " does not exist !" << std::endl;
		return (EXIT_FAILURE);
	}
	while (!file.eof() && file >> std::noskipws >> c)
		text += c;
	file.close();
	replacer(argv, text);
	return (0);
}