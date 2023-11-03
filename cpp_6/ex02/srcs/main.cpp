/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 10:25:05 by ldeville          #+#    #+#             */
/*   Updated: 2023/11/02 18:24:06 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "common.hpp"

Base*	generate(void) {
	
	std::srand(static_cast<unsigned int>(time(NULL)));
	int	rand = std::rand() % 3;
	std::cout << "Roll : " << rand << std::endl;
	switch (rand) {
		case 0:
			return new A();
		case 1:
			return new B();
		case 2:
			return new C();
		default:
			return new A();
	}
}

void	identify(Base* p) {

	if (dynamic_cast<A*>(p))
		std::cout << "It's a class A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "It's a class B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "It's a class C" << std::endl;
	else
		std::cout << "The class can't be recognized." << std::endl;
}

void	identify(Base& p) {

	try {
		A& a = dynamic_cast<A&>(p);
		std::cout << "It's a class A" << std::endl;
		(void)a;
	} catch(const std::exception& e) {}
	try {
		B& b = dynamic_cast<B&>(p);
		std::cout << "It's a class B" << std::endl;
		(void)b;
	} catch(const std::exception& e) {}
	try {
		C& c = dynamic_cast<C&>(p);
		std::cout << "It's a class C" << std::endl;
		(void)c;
	} catch(const std::exception& e) {}
}

int	main(void) {

	Base* test = generate();

	std::cout << "	~TEST *~	" << std::endl;
	identify(test);
	std::cout <<  std::endl << "	~TEST &~	" << std::endl;
	identify(*test);

	delete test;
	return (0);
}