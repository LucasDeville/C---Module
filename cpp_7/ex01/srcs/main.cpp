/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 10:25:05 by ldeville          #+#    #+#             */
/*   Updated: 2024/01/03 14:17:50 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "common.hpp"

int	main(void) {

	int 		test1[5] = {1, 2, 3, 4, 5};
	std::string test2[4] = {"Ceci", "est", "un", "test."};

	std::cout << "	~TEST 1~	" << std::endl;
	iter(test1, 5, &display);

	std::cout << std::endl << "	~TEST 2~	" << std::endl;
	iter(test2, 4, &display);

	return (0);
}
