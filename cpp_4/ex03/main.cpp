/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:25:03 by ldeville          #+#    #+#             */
/*   Updated: 2023/10/30 15:16:13 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int	main(void) {

	std::cout << "		~Subject tests~		" << std::endl;
	MateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	/*std::cout << std::endl << "		~Tests~		" << std::endl;
	Character* pretest = new Character("me");
	Character* pretest2 = new Character("Billy");

	tmp = src->createMateria("ice");
	pretest->equip(tmp);
	tmp = src->createMateria("cure");
	pretest->equip(tmp);
	ICharacter* test = new Character(*pretest);*/
	
	delete bob;
	delete me;
	delete src;
	
	/*pretest->use(0, *pretest2);
	pretest->use(1, *pretest2);
	pretest->unequip(1);
	pretest->use(1, *pretest2);
	std::cout << std::endl;
	test->use(0, *pretest);
	delete pretest;
	delete pretest2;
	delete test;*/

	return 0;
}
