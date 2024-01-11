/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:48:17 by ldeville          #+#    #+#             */
/*   Updated: 2024/01/11 11:16:36 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BITCOINEXCHANGE_HPP__
#define __BITCOINEXCHANGE_HPP__

#include "common.hpp"

class BitcoinExchange {

private:
	char*							_file_name;
	std::map<std::string, double>	_data;


public:

	BitcoinExchange(void);
	BitcoinExchange(char *file);
	BitcoinExchange(BitcoinExchange const & src);
	~BitcoinExchange(void);

	BitcoinExchange&	operator=(BitcoinExchange const & src);
	void				init_data(void);
	void				execute_exchange(void);
	double				getValue(std::string date);
	std::string			prevDate(std::string date);
	bool				badInputData(std::string str);
	int					checkNumber(std::string str) const;
	
};
#endif