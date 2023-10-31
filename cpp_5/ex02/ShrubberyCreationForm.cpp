/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 08:35:37 by ldeville          #+#    #+#             */
/*   Updated: 2023/10/31 09:34:44 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("ShrubberyCreationForm", 150, 0){

	this->_target = "ShrubberyCreationForm";
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) 
: AForm("ShrubberyCreationForm", 145, 137) {

	this->_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) : AForm(src) {

	*this = src;
}

ShrubberyCreationForm ShrubberyCreationForm::operator=(ShrubberyCreationForm const & src) {

	if (this != &src)
		this->_target = src._target;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {

}

void	ShrubberyCreationForm::execute(BureauCrat const & executor) const {

	if (!this->getSigned())
		throw FormNotSignedException();
	else if (executor.getGrade() > this->getExecGrade())
		throw GradeTooLowException();
	else
	{
		std::cout << "In ShrubberyCreationForm" << std::endl;
	}
}