/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:50:21 by ldeville          #+#    #+#             */
/*   Updated: 2023/11/08 16:49:38 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(void) {

	init_data();
}

BitcoinExchange::BitcoinExchange(char* file) : _file_name(file) {

	init_data();
	execute_exchange();
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const & src) {

	*this = src;
}

BitcoinExchange::~BitcoinExchange(void) {
	
}

BitcoinExchange& BitcoinExchange::operator=(BitcoinExchange const & src) {

	if (this != &src)
	{
		this->_file_name = src._file_name;
		this->_data.clear();
		this->_data.insert(src._data.begin(), src._data.end());
	}
	return *this;
}

void BitcoinExchange::init_data(void) {
	
	std::ifstream	file;
	char			tmp[1024];

	file.open("./res/data.csv");
	if (!file)
	{
		std::cout << "The data file data.csv has been deleted !" << std::endl;
		exit(EXIT_FAILURE);
	}
	file.getline(tmp, 1024);
	while (!file.eof())
	{
		file.getline(tmp, 1024);
		if (!tmp[10] || tmp[10] != ',')
		{
			std::cout << "The data file data.csv is corrupted !" << std::endl;
			file.close();
			exit(EXIT_FAILURE);
		}
		this->_data.insert( std::pair<std::string, double>(static_cast<std::string>(tmp).substr(0,10), atof(&tmp[11])));
	}
	file.close();
}

std::string	BitcoinExchange::prevDate(std::string date) {

	int	year = atoi((date.substr(0, 4)).c_str());
	int	month = atoi((date.substr(5, 2)).c_str());
	int	day = atoi((date.substr(8, 2)).c_str());

	if (--day == 0)
	{
		day = 31;
		if (--month == 0)
		{
			month = 12;
			if (--year == 2008)
				return "Error";
		}
	}
	std::ostringstream ss;
    ss << year << "-" << (month < 10 ? "0" : "") << month << "-" << (day < 10 ? "0" : "") << day;
	date = ss.str();
	return (date);
}

double	BitcoinExchange::getValue(std::string date) {
	
	std::map<std::string, double>::const_iterator::iterator	it;
	
	it = this->_data.find(date);
	if (it == this->_data.end()) 
	{	
		while (it == this->_data.end())
		{
			date = prevDate(date);
			if (date == "Error")
				return -1;
			it = this->_data.find(date);
		}
	}
	return (it->second);
}

bool	BitcoinExchange::badInputData(std::string str) {

	int	year = atoi((str.substr(0, 4)).c_str());
	int	month = atoi((str.substr(5, 2)).c_str());
	int	day = atoi((str.substr(8, 2)).c_str());
	if (str.size() < 11 || str[4] != '-' || str[7] != '-' || str[11] != '|')
		return true;
	else if (year < 2009 || year > 2022)
		return true;
	else if (month < 1 || month > 12)
		return true;
	else if (day < 1 || day > 31)
		return true;		
	return false;
}

void	BitcoinExchange::execute_exchange(void) {

	std::ifstream	file;
	std::string		tmp;
	double			num;
	double			value;

	file.open(this->_file_name);
	if (!file)
	{
		std::cout << "Error: could not open file." << std::endl;
		exit(EXIT_FAILURE);
	}
	std::getline(file, tmp);
	while (!file.eof())
	{
		std::getline(file, tmp);
		if (file.eof())
			break;
		if (badInputData(tmp))
		{
			std::cout << "Error: bad input => " << tmp << std::endl;
			continue ;
		}
		num = atof(&tmp[12]);
		if (num < 0 || num > 1000)
		{
			if (num < 0)
				std::cout << "Error: not a positive number." << std::endl;
			else
				std::cout << "Error: too large a number." << std::endl;
			continue ;
		}
		value = getValue(tmp.substr(0,10));
		if (value == -1)
		{
			std::cout << "Error: bad input => " << tmp << std::endl;
			continue ;
		}
		std::cout << tmp.substr(0, 10) << " =>" << &tmp[12] << " = " << num * value << std::endl;
	}
	file.close();
}
