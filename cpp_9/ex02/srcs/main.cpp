/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:26:58 by ldeville          #+#    #+#             */
/*   Updated: 2023/11/09 15:39:29 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "common.hpp"
#include "PmergeMe.hpp"

int	main(int argc, char **argv) {

    if (argc != 2)
    {
        std::cout << "Error" << std::endl;
        return (-1);
    }
    
    PmergeMe<std::vector> test;
    

    
    return (0);
}