/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 10:23:30 by ldeville          #+#    #+#             */
/*   Updated: 2023/10/28 11:08:04 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) {
	if (DEBUG)
		std::cout << "Ice Default constructor called" << std::endl;
	this->type = "ice";
}
Ice::Ice(Ice const & src) {
	if (DEBUG)
		std::cout << "Ice Copy constructor called" << std::endl;
	*this = src;
}

Ice::~Ice(void) {
	if (DEBUG)
		std::cout << "Ice Destructor called" << std::endl;
}

Ice&	Ice::operator=(Ice const & src) {
	if (DEBUG)
			std::cout << "Ice Copy assignement operator called" << std::endl;
	if (this != &src)
		this->type = src.type;
	return *this;
}

AMateria*	Ice::clone(void) const {
	return (new Ice(*this));
}

void	Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
