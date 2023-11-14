/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:18:06 by ldeville          #+#    #+#             */
/*   Updated: 2023/11/14 10:17:29 by ldeville         ###   ########.fr       */
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


template<typename T>
void	PmergeMe<T>::sort(void) {

	T<int>	stack_l;
	T<int>	stack_r;
	int		i = 0;

	while (i < this->_stack.size() / 2)
		stack_l.push_back(_stack[i++]);
	while(i < this->_stack.size())
		stack_r.push_back(_stack[i++]);

	sortPair
}

template<typename T>
void	PmergeMe<T>::displayResult(void) {

	std::cout << "After:	";
	if (this->_stack.size() < 5) {
		for (size_t i = 0; i < this->_stack.size(); i++)
			std::cout << _stack[i] << " ";
	}
	else {
		for (size_t i = 0; i < 4; i++)
			std::cout << _stack[i] << " ";
		if (this->_stack.size() == 5)
			std::cout << _stack[4];
		else
			std::cout << "[...]";
	}
	std::cout << std::endl;
}

template class PmergeMe< std::vector<int> >;
template class PmergeMe< std::deque<int> >;
