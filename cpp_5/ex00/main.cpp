/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:25:03 by ldeville          #+#    #+#             */
/*   Updated: 2023/10/31 09:42:25 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "common.hpp"
#include "BureauCrat.hpp"

int	main(void) {

	std::cout << "	~TEST 1~	" << std::endl;
	BureauCrat test("Billy");

	try {
	
		std::cout << test << std::endl;
		test.downGrade();
		std::cout << test << std::endl;
	}
	catch (BureauCrat::GradeTooHighException& e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (BureauCrat::GradeTooLowException& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "	~TEST 2~	" << std::endl;
	BureauCrat test2("Johny");
	
	try {
		
		test.setGrade(5);
		std::cout << test << std::endl;
		test.upGrade();
		std::cout << test << std::endl;
		test.upGrade();
		std::cout << test << std::endl;
		test.upGrade();
		std::cout << test << std::endl;
		test.upGrade();
		std::cout << test << std::endl;
		test.upGrade();
		std::cout << test << std::endl;
	}
	catch (BureauCrat::GradeTooHighException& e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (BureauCrat::GradeTooLowException& e)
	{
		std::cout << e.what() << std::endl;
	}


	return 0;
}
