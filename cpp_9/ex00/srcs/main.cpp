/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:26:58 by ldeville          #+#    #+#             */
/*   Updated: 2023/11/08 16:35:41 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "common.hpp"
#include "BitcoinExchange.hpp"

int	main(int argc, char **argv) {

    if (argc != 2)
    {
        std::cout << "Error: could not open file." << std::endl;
        return (-1);
    }
    
    BitcoinExchange test = BitcoinExchange(argv[1]);
    
    
    return (0);
}