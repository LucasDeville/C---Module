/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 08:35:37 by ldeville          #+#    #+#             */
/*   Updated: 2023/10/31 09:34:44 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : AForm("PresidentialPardonForm", 150, 0){

	this->_target = "PresidentialPardonForm";
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target) 
: AForm("PresidentialPardonForm", 145, 137) {

	this->_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) : AForm(src) {

	if (this != &src)
		this->_target = src._target;
	*this = src;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const & src) {

	if (this != &src)
		this->_target = src._target;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm(void) {

}

void	PresidentialPardonForm::execute(BureauCrat const & executor) const {

	if (!this->getSigned())
		throw FormNotSignedException();
	else if (executor.getGrade() > this->getExecGrade())
		throw GradeTooLowException();
	else
	{
		std::cout << executor.getName() << " executed " << this->_target << std::endl;
		std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	}
}