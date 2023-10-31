/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:25:03 by ldeville          #+#    #+#             */
/*   Updated: 2023/10/31 11:20:54 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "common.hpp"
#include "BureauCrat.hpp"
#include "Form.hpp"

int	main(void) {

	std::cout << "	~TEST~	" << std::endl;
	BureauCrat	test("Billy");
	Form		form("Form 1", 100, 150);

	std::cout << test << std::endl;
	std::cout << form << std::endl;
	test.signForm(form);
	std::cout << form << std::endl;
	test.setGrade(100);
	test.signForm(form);
	std::cout << form << std::endl;

	return 0;
}
