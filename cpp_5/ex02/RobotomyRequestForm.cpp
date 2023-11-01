/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 08:51:21 by ldeville          #+#    #+#             */
/*   Updated: 2023/11/01 09:29:47 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <random>

RobotomyRequestForm::RobotomyRequestForm(void) : AForm("RobotomyRequestForm", 72, 45) {

	this->_target = "None";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45) {

	this->_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) : AForm(src) {
	
	*this = src; 
}

RobotomyRequestForm::~RobotomyRequestForm(void) {

}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const & src) {

	if (this != &src)
		this->_target = src._target;
	return *this;
}

void	RobotomyRequestForm::execute(BureauCrat const & executor) const {

	if (!this->getSigned())
		throw FormNotSignedException();
	else if (executor.getGrade() > this->getExecGrade())
		throw GradeTooLowException();
	else
	{
		std::cout << executor.getName() << " executed " << this->_target << std::endl;
		std::random_device rd;
		int dice_roll = rd() % 100;
		std::cout << "*drilling noises*" << std::endl;
		if (dice_roll > 50)
			std::cout << this->_target << " has been robotomized successfully !" << std::endl;
		else
			std::cout << "Sadly the robotomy failed..." << std::endl;
	}
}