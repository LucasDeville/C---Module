/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:31:31 by ldeville          #+#    #+#             */
/*   Updated: 2023/11/03 15:55:17 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void) {

}

Span::Span(unsigned int n) : _n(n) {
	
}

Span::Span(Span const & src) {

	*this = src;
}

Span::~Span(void) {
	
}

Span& Span::operator=(Span const & src) {

	if (this != &src)
	{
		this->_n = src._n;
		this->_list.clear();
		std::copy(src._list.begin(), src._list.end(), std::back_inserter(this->_list)); 
	}
	return *this;
}

void	Span::addNumber(int nbr) {

	if (this->_list.size() < this->_n)
		this->_list.push_back(nbr);
	else
		throw TooManyNumbers();
}

void	Span::addNumber(std::list<int>::const_iterator begin, std::list<int>::const_iterator end) {
	
	if (this->_list.size() < this->_n)
		std::copy(begin, end, std::back_inserter(this->_list)); 
	else
		throw TooManyNumbers();
}

int	Span::shortestSpan(void) {
	
	if (this->_list.size() < 2)
		throw TooFewNumbers();
	std::list<int>::const_iterator it;
	std::list<int>::const_iterator it2;
	int min = *std::max_element(this->_list.begin(), this->_list.end());
	for (it = this->_list.begin(); it != this->_list.end(); ++it)
	{
		for(it2 = this->_list.begin(); it2 != this->_list.end(); ++it2)
		{
			if (it == it2)
				continue;
			if(std::abs(*it - *it2) < min)
				min = std::abs(*it - *it2);
		}
	}
	return min;
}

int	Span::longestSpan(void) {

	if (this->_list.size() < 2)
		throw TooFewNumbers();
	return (*std::max_element(this->_list.begin(), this->_list.end()) - *std::min_element(this->_list.begin(), this->_list.end()));
}

std::list<int>&	Span::getList(void) {
	return this->_list;
}
