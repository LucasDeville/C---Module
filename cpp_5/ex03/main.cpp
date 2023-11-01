/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:25:03 by ldeville          #+#    #+#             */
/*   Updated: 2023/11/01 10:12:42 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "common.hpp"
#include "BureauCrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main(void) {

	std::cout << "	~TEST~	" << std::endl;
	{
		Intern someRandomIntern;
		AForm* rrf;
		rrf = someRandomIntern.makeForm("robot request", "Bender");
		
		if (rrf)
		{
			std::cout << *rrf << std::endl;
			delete rrf;
		}
	}

	std::cout << std::endl << "	~TEST 2~	" << std::endl;
	{
		Intern someRandomIntern;
		AForm* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		
		if (rrf)
		{
			std::cout << *rrf << std::endl;
			delete rrf;
		}
	}

	std::cout << std::endl << "	~TEST 3~	" << std::endl;
	{
		Intern someRandomIntern;
		AForm* rrf;
		rrf = someRandomIntern.makeForm("shrubbery request", "Bender2");
		
		if (rrf)
		{
			std::cout << *rrf << std::endl;
			delete rrf;
		}
	}

	std::cout << std::endl << "	~TEST 4~	" << std::endl;
	{
		Intern someRandomIntern;
		AForm* rrf;
		rrf = someRandomIntern.makeForm("presidential request", "Bender3");
		
		if (rrf)
		{
			std::cout << *rrf << std::endl;
			delete rrf;
		}
	}

	return 0;
}
