/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 16:04:45 by ldeville          #+#    #+#             */
/*   Updated: 2023/11/03 16:50:40 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MUTANTSTACK_HPP__
#define __MUTANTSTACK_HPP__

#include "common.hpp"

template< typename T>
class MutantStack : public std::stack<T> {

public:

	MutantStack(void) : std::stack<T>() {};
	MutantStack(MutantStack const & src) {
		*this = src;
	};
	~MutantStack(void) {};

	MutantStack&	operator=(MutantStack const & src) {
		if (this != &src)
			std::stack<T>::operator=(src);
		return *this;
	};

	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator begin(void) {
		return this->c.begin();
	}

	iterator end(void) {
		return this->c.end();
	}
};

#endif