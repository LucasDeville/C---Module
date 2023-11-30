/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:47:08 by ldeville          #+#    #+#             */
/*   Updated: 2023/11/30 10:17:23 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {

private:

	Brain* _brain;

public:

	Dog(void);
	Dog(Dog const & src);
	~Dog(void);

	Dog& 	operator=(Dog const & src);
	void	makeSound(void) const;
	void	setIdeas(std::string ideas[100]);
	void	printIdeas(void);

};