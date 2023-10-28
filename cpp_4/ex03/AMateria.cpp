/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:52:10 by ldeville          #+#    #+#             */
/*   Updated: 2023/10/28 11:06:06 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) {

	if (DEBUG)
		std::cout << "AMateria Default constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type) {
	if (DEBUG)
		std::cout << "AMateria Default assignement constructor called" << std::endl;
	this->type = type;
}

AMateria::AMateria(AMateria const & src) {
	
	if (DEBUG)
		std::cout << "AMateria Copy constructor called" << std::endl;
	*this = src;
}

AMateria::~AMateria(void) {

	if (DEBUG)
		std::cout << "AMateria Destructor called" << std::endl;
}

AMateria& AMateria::operator=(AMateria const & src) {
	
	if (DEBUG)
			std::cout << "AMateria Copy assignement operator called" << std::endl;
	if (this != &src)
		this->type = src.type;
	return *this;
}

AMateria*	AMateria::clone(void) const {
	
}

std::string	AMateria::getType() const {
	return this->type;
}

void	AMateria::use(ICharacter& target) {
	
}