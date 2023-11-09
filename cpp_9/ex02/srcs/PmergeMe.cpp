/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:18:06 by ldeville          #+#    #+#             */
/*   Updated: 2023/11/09 14:20:47 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(void) {

}

PmergeMe::PmergeMe(PmergeMe const & src) {

	*this = src;
}

PmergeMe::~PmergeMe(void) {

}

PmergeMe& PmergeMe::operator=(PmergeMe const & src) {

	if (this != &src)
	{

	}
	return *this;
}