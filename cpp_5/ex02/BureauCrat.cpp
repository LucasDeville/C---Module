/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BureauCrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 08:35:37 by ldeville          #+#    #+#             */
/*   Updated: 2023/10/31 17:01:20 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BureauCrat.hpp"

BureauCrat::BureauCrat(void) {

	this->_grade = 150;
}

BureauCrat::BureauCrat(const std::string name) : _name(name) {

	this->_grade = 150;
}

BureauCrat::BureauCrat(BureauCrat const & src) : _name(src.getName()) {

	*this = src;
}

BureauCrat& BureauCrat::operator=(BureauCrat const & src) {

	if (this != &src)
		this->_grade = src.getGrade();
	return *this;
}

BureauCrat::~BureauCrat(void) {

}

const std::string BureauCrat::getName(void) const {

	return this->_name;
}

int BureauCrat::getGrade(void) const {

	return this->_grade;
}

void	BureauCrat::setGrade(int grade) {

	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();	
	this->_grade = grade;
}

void	BureauCrat::upGrade(void) {

	if (this->_grade <= 1)
		throw GradeTooHighException();
	this->_grade -= 1;
}

void	BureauCrat::downGrade(void) {

	if (this->_grade >= 150)
		throw GradeTooLowException();
	this->_grade += 1;
}

void	BureauCrat::signForm(AForm & src) {

	try {
		src.beSigned(*this);
		std::cout << this->_name << " signed " << src.getName() << std::endl;
	}
	catch (AForm::GradeTooLowException &e)
	{
		std::cout << this->_name << " couldn't sign " << src.getName() << "because " << e.what() << std::endl;
	}
}

void	BureauCrat::executeForm(AForm const & form) {

	form.execute(*this);
}

std::ostream& operator<<(std::ostream & o, BureauCrat const & src) {
	
	o << src.getName() << ", bureaucrat grade " << src.getGrade() << ".";
	return o;
}