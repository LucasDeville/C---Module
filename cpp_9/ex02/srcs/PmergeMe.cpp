/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:18:06 by ldeville          #+#    #+#             */
/*   Updated: 2023/11/10 15:54:22 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

template<typename T>
PmergeMe<T>::PmergeMe(PmergeMe<T> const & src) {

	*this = src;
}

template<typename T>
PmergeMe<T>& PmergeMe<T>::operator=(PmergeMe<T> const & src) {

	if (this != &src)
	{

	}
	return *this;
}

template<typename T>
void	PmergeMe<T>::setArg(char** arg) {

	int	i = 0;
	while (arg[i])
		this->_stack.push_back(atoi(arg[i++]));

	for (size_t i = 0; i < this->_stack.size(); i++)
		std::cout << _stack[i] << std::endl;
}

template class PmergeMe< std::vector<int> >;
template class PmergeMe< std::list<int> >;