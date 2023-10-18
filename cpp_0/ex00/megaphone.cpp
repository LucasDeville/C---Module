/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 10:02:02 by ldeville          #+#    #+#             */
/*   Updated: 2023/10/18 10:37:15 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	main(int argc, char **argv)
{
	int	i;
	int	y;

	y = 1;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (argv[y])
		{
			i = 0;
			while (argv[y][i])
			{
				if (argv[y][i] < 'a' || argv[y][i] > 'z')
					std::cout << argv[y][i];
				else
					std::cout << (char)toupper(argv[y][i]);
				i++;
			}
			y++;
		}
		std::cout << std::endl;
	}
	return (0);
}