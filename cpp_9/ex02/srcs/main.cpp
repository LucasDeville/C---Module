/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:26:58 by ldeville          #+#    #+#             */
/*   Updated: 2023/11/10 15:52:06 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "common.hpp"
#include "PmergeMe.hpp"

int	main(int argc, char **argv) {

    if (argc < 2)
    {
        std::cout << "Error" << std::endl;
        return (-1);
    }
    
    PmergeMe< std::vector<int> > test;
    test.setArg(++argv);

    /*PmergeMe< std::list<int> > test2;
    test2.setArg(++argv);*/
    
    return (0);
}