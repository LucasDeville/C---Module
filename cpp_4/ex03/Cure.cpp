/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 10:23:30 by ldeville          #+#    #+#             */
/*   Updated: 2023/10/28 11:02:13 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) {
	if (DEBUG)
		std::cout << "Cure Default constructor called" << std::endl;
	this->type = "cure";
}
Cure::Cure(Cure const & src) {
	if (DEBUG)
		std::cout << "Cure Copy constructor called" << std::endl;
	*this = src;
}

Cure::~Cure(void) {
	if (DEBUG)
		std::cout << "Cure Destructor called" << std::endl;
}

Cure&	Cure::operator=(Cure const & src) {
	if (DEBUG)
			std::cout << "Cure Copy assignement operator called" << std::endl;
	if (this != &src)
		this->type = src.type;
	return *this;
}

AMateria*	Cure::clone(void) const {
	return (new Cure(*this));
}

void	Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
