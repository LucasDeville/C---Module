/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:50:21 by ldeville          #+#    #+#             */
/*   Updated: 2023/11/06 18:04:32 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(void) {

}

BitcoinExchange::BitcoinExchange(std::string file) : _file_name(file) {


}

BitcoinExchange::BitcoinExchange(BitcoinExchange const & src) {

	*this = src;
}

BitcoinExchange::~BitcoinExchange(void) {
	
}

BitcoinExchange& BitcoinExchange::operator=(BitcoinExchange const & src) {

	if (this != &src)
	{


	}
	return *this;
}