/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 10:54:17 by ldeville          #+#    #+#             */
/*   Updated: 2023/11/03 11:13:31 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __EASYFIND_HPP__
#define __EASYFIND_HPP__

template< typename T>
void	easyfind(T& cont, int find) {
	if(std::find(cont.begin(), cont.end(), find) != cont.end())
		std::cout << find << " is in this container !" << std::endl;
	else
		std::cout << find << " is not in this container !" << std::endl;
}

#endif