/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 08:35:37 by ldeville          #+#    #+#             */
/*   Updated: 2023/10/31 09:34:44 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) 
: _name("None"), _sign_grade(150), _exec_grade(0){

	this->_signed = false;
}

Form::Form(const std::string name, const int sign_grade, const int exec_grade) 
: _name(name), _sign_grade(sign_grade), _exec_grade(exec_grade) {

	this->_signed = false;
}

Form::Form(Form const & src) : _name(src.getName()), _sign_grade(src.getSignedGrade()), _exec_grade(src.getExecGrade()) {

	*this = src;
}

Form Form::operator=(Form const & src) {

	if (this != &src)
		this->_signed = src.getSigned();
	return *this;
}

Form::~Form(void) {

}

const std::string Form::getName(void) const {

	return this->_name;
}

int	Form::getSignedGrade(void) const {

	return this->_sign_grade;
}

int	Form::getExecGrade(void) const {

	return this->_exec_grade;
}

bool	Form::getSigned(void) const {

	return this->_signed;
}

void	Form::beSigned(BureauCrat const & src) {

	if (src.getGrade() > this->_sign_grade)
		throw GradeTooLowException();
	else
		this->_signed = true;
}

std::ostream& operator<<(std::ostream & o, Form const & src) {
	
	o << "Form : " << src.getName() << " - Grade to sign : " << src.getSignedGrade() << " - Grade to execute : " << 
	src.getExecGrade() << " - Signed status : " << (src.getSigned() ? "Signed." : "Not signed.");
	return o;
}