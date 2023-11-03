/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:21:29 by ldeville          #+#    #+#             */
/*   Updated: 2023/11/03 15:54:40 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SPAN_HPP__
#define __SPAN_HPP__

#include "common.hpp"

class Span {

private:

	unsigned int	_n;
	std::list<int>	_list;
	Span(void);

public:

	Span(unsigned int n);
	Span(Span const & src);
	~Span(void);

	Span&	operator=(Span const & src);
	void	addNumber(int nbr);
	void	addNumber(std::list<int>::const_iterator begin, std::list<int>::const_iterator end);
	int		shortestSpan(void);
	int		longestSpan(void);
	std::list<int>&	getList(void);

	class TooManyNumbers : public std::exception {
		public:
		virtual const char* what() const throw() { return "There is already too many numbers in the Span !"; };	
	};

	class TooFewNumbers : public std::exception {
		public:
		virtual const char* what() const throw() { return "There is too few numbers in the Span !"; };	
	};

};

#endif