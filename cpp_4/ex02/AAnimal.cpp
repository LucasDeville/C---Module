/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:52:10 by ldeville          #+#    #+#             */
/*   Updated: 2023/10/27 11:12:25 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void) {

	if (DEBUG)
		std::cout << "AAnimal Default constructor called" << std::endl;
}

AAnimal::AAnimal(AAnimal const & src) {
	
	if (DEBUG)
		std::cout << "AAnimal Copy constructor called" << std::endl;
	*this = src;
}

AAnimal::~AAnimal(void) {

	if (DEBUG)
		std::cout << "AAnimal Destructor called" << std::endl;
}

AAnimal& AAnimal::operator=(AAnimal const & src) {
	
	if (DEBUG)
			std::cout << "AAnimal Copy assignement operator called" << std::endl;
	if (this != &src)
		this->type = src.type;
	return *this;
}

void		AAnimal::makeSound() const {
	std::cout << "*insert AAnimal sound*" << std::endl;
}

std::string	AAnimal::getType() const {
	return this->type;
}
