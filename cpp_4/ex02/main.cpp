/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:25:03 by ldeville          #+#    #+#             */
/*   Updated: 2023/10/28 09:46:05 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "WrongCat.hpp"

int	main(void) {

	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();
	
	delete j;//should not create a leak
	delete i;

	const AAnimal* zoo[10];

	for (int i = 0; i < 10; i++)
	{
		if (i < 5)
			zoo[i] = new Dog();
		else
			zoo[i] = new Cat();
	}

	std::cout << "	~Array test~	" << std::endl;
	for (int i = 0; i < 10; i++)
		zoo[i]->makeSound();

	for (int i = 0; i < 10; i++)
		delete zoo[i];


	std::cout << "	~Copy test~	" << std::endl;
	Dog Dog1;
	Dog Dog2;
	std::string	ideas[100] = {"I have an idea !"};
	std::string	ideas2[100] = {"I have another idea !"};

	Dog1.setIdeas(ideas);
	Dog1.printIdeas();
	Dog2.printIdeas();
	Dog2 = Dog1;
	Dog1.setIdeas(ideas2);
	Dog1.printIdeas();
	Dog2.printIdeas();

	return 0;
}
