/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 09:42:47 by ldeville          #+#    #+#             */
/*   Updated: 2023/11/01 10:03:01 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void) {

}

Intern::Intern(Intern const & src) {

	*this = src;
}

Intern::~Intern(void) {

}

Intern& Intern::operator=(Intern const & src) {
	
	return *this;
}

AForm*	Intern::makeForm(std::string form_name, std::string target) {
	
	int i;
	
	for (i = 0; i < 3; i++)
		if (form_name == this->_form_name[i])
			break;
	
	switch (i)
	{
		case 0:
			std::cout << "Intern creates " << target << std::endl;
			return (new RobotomyRequestForm(target));

		case 1:
			std::cout << "Intern creates " << target << std::endl;
			return (new ShrubberyCreationForm(target));

		case 2:
			std::cout << "Intern creates " << target << std::endl;
			return (new PresidentialPardonForm(target));
		
		case 3:
			std::cout << "Intern cannot find the form : " << form_name << std::endl;
			break;

	}
	return (NULL);
}