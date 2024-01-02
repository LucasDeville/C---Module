/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:25:03 by ldeville          #+#    #+#             */
/*   Updated: 2024/01/02 13:36:41 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "common.hpp"
#include "BureauCrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void) {

	try {

		std::cout << "	~TEST~	" << std::endl;
		BureauCrat	test("Billy");
		ShrubberyCreationForm		form("Home");

		std::cout << test << std::endl;
		std::cout << form << std::endl;
		test.signForm(form);
		std::cout << form << std::endl;
		test.setGrade(145);
		test.signForm(form);
		std::cout << form << std::endl;
		test.setGrade(137);
		test.executeForm(form);
	}
	catch (AForm::FormNotSignedException& e) {
		std::cout << "Error : The form cannot execute because " << e.what() << std::endl;
	}
	catch (AForm::GradeTooLowException& e) {
		std::cout << "Error : The form cannot execute because " << e.what() << std::endl;
	}

	try {

		std::cout << std::endl << "	~TEST 2~	" << std::endl;
		BureauCrat	test2("Francisco");
		RobotomyRequestForm		form2("World");

		std::cout << test2 << std::endl;
		std::cout << form2 << std::endl;
		test2.setGrade(45);
		test2.signForm(form2);
		std::cout << form2 << std::endl;
		test2.executeForm(form2);
	}
	catch (AForm::FormNotSignedException& e) {
		std::cout << "Error : The form cannot execute because " << e.what() << std::endl;
	}
	catch (AForm::GradeTooLowException& e) {
		std::cout << "Error : The form cannot execute because " << e.what() << std::endl;
	}

	try {

		std::cout << std::endl << "	~TEST 3~	" << std::endl;
		BureauCrat	test2("Fred");
		PresidentialPardonForm		form2("Bear");

		std::cout << test2 << std::endl;
		std::cout << form2 << std::endl;
		test2.setGrade(45);
		test2.signForm(form2);
		std::cout << form2 << std::endl;
		test2.executeForm(form2);
	}
	catch (AForm::FormNotSignedException& e) {
		std::cout << "Error : The form cannot execute because " << e.what() << std::endl;
	}
	catch (AForm::GradeTooLowException& e) {
		std::cout << "Error : The form cannot execute because " << e.what() << std::endl;
	}

	return 0;
}
