/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 09:33:38 by ldeville          #+#    #+#             */
/*   Updated: 2023/11/03 10:30:21 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ARRAY_HPP__
#define __ARRAY_HPP__

template< typename T>
class Array {

private:

	unsigned int _n;
	T 			*_element;

public:

	Array(void) : _n(0), _element(new T[_n]) {};
	Array(unsigned int n) : _n(n), _element(new T[n]) {};
	Array(Array const & src) { *this = src; };
	~Array(void) { delete [] this->_element; };

	Array&			operator=(Array const & src) {
		if (this != &src)
		{
			delete [] this->_element;
			this->_element = new T[src._n]; 
			for(unsigned int i = 0; i < src._n; i++)
				this->_element[i] = src._element[i];
			this->_n = src._n;
		}
		return *this;
	};
	T&		operator[](unsigned int n) const {
			if (this->_n > n)
				return (this->_element[n]);
			throw OutOfBounds();
	};
	unsigned int	size(void) const { return this->_n; }

	class OutOfBounds : public std::exception {
        public:
            virtual const char* what() const throw() { return "This index is out of bounds !";}
    };
};

#endif