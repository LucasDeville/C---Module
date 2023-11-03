/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 09:18:00 by ldeville          #+#    #+#             */
/*   Updated: 2023/11/03 09:32:19 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ITER_HPP__
#define __ITER_HPP__

template< typename A >
void	iter(A *adress, int length, void (*fct)(A&)) {

	for (int i = 0; i < length; i++)
		fct(adress[i]);
}

template< typename E >
void	display(E& element) {

	std::cout << element << std::endl;
}

#endif