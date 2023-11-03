/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:42:13 by ldeville          #+#    #+#             */
/*   Updated: 2023/11/02 17:30:57 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DATA_HPP__
#define __DATA_HPP__

#include "common.hpp"

struct Data {
	std::string	_data;
};

uintptr_t	serialize(Data* ptr);
Data*		deserialize(uintptr_t raw);

#endif