/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 09:02:58 by ldeville          #+#    #+#             */
/*   Updated: 2023/11/03 09:15:42 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WHATEVER_HPP__
#define __WHATEVER_HPP__

template< typename T>
void	swap(T& a, T& b) {
	T	tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template< typename T>
T&	min(T& a, T& b) {
	return a >= b ? b : a;
}

template< typename T>
T&	max(T& a, T& b){
	return a >= b ? a : b;
}

#endif