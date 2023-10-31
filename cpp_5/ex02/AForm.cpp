/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 08:35:37 by ldeville          #+#    #+#             */
/*   Updated: 2023/10/31 09:34:44 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(void) 
: _name("None"), _sign_grade(150), _exec_grade(0){

	this->_signed = false;
}

AForm::AForm(const std::string name, const int sign_grade, const int exec_grade) 
: _name(name), _sign_grade(sign_grade), _exec_grade(exec_grade) {

	this->_signed = false;
}

AForm::AForm(AForm const & src) : _name(src.getName()), _sign_grade(src.getSignedGrade()), _exec_grade(src.getExecGrade()) {

	*this = src;
}

AForm& AForm::operator=(AForm const & src) {

	if (this != &src)
		this->_signed = src.getSigned();
	return *this;
}

AForm::~AForm(void) {

}

const std::string AForm::getName(void) const {

	return this->_name;
}

int	AForm::getSignedGrade(void) const {

	return this->_sign_grade;
}

int	AForm::getExecGrade(void) const {

	return this->_exec_grade;
}

bool	AForm::getSigned(void) const {

	return this->_signed;
}

void	AForm::beSigned(BureauCrat const & src) {

	if (src.getGrade() > this->_sign_grade)
		throw GradeTooLowException();
	else
		this->_signed = true;
}

std::ostream& operator<<(std::ostream & o, AForm const & src) {
	
	o << "AForm : " << src.getName() << " - Grade to sign : " << src.getSignedGrade() << " - Grade to execute : " << 
	src.getExecGrade() << " - Signed status : " << (src.getSigned() ? "Signed." : "Not signed.");
	return o;
}