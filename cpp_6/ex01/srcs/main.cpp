/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 10:25:05 by ldeville          #+#    #+#             */
/*   Updated: 2023/11/02 17:35:05 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "common.hpp"
#include "Data.hpp"

uintptr_t	serialize(Data* ptr) {

	return reinterpret_cast<uintptr_t>(ptr);
}

Data*		deserialize(uintptr_t raw) {
	
	return reinterpret_cast<Data *>(raw);
}

int	main(void) {

	Data*		test = new Data;
	uintptr_t	serialize_it;
	Data*		deserialize_it;

	test->_data = "Ma data.";

	std::cout << "	~TEST~	" << std::endl;
	std::cout << "Before : " << test->_data << std::endl;
	serialize_it = serialize(test);
	deserialize_it = deserialize(serialize_it);
	std::cout << "After  : " << deserialize_it->_data << std::endl;
	
	delete test;
	
	return (0);
}