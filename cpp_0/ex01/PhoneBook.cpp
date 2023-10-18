/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:17:21 by ldeville          #+#    #+#             */
/*   Updated: 2023/10/18 17:37:06 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "common.h"

PhoneBook::PhoneBook(void) {
	_index = 0;
	_max_contact = false;
}

PhoneBook::~PhoneBook(void) {
}

void PhoneBook::AddContact(void) {
	std::string fname;
	std::string lname;
	std::string nickname;
	std::string phone_num;
	std::string secret;

	fname = GetInfos("First name");
	lname = GetInfos("Last name");
	nickname = GetInfos("Nickname");
	phone_num = GetInfos("Phone number");
	secret = GetInfos("Darkest secret");
	_contact[_index % 8].SetContact(fname, lname, nickname, phone_num, secret);
	if (_index != 8 && !_max_contact)
	{
		std::cout << "Contact " << (_index % 8 + 1) << " added successfully !" << std::endl;
		_index++;
		if (_index == 8 && !_max_contact)
		{
			_max_contact = true;
			std::cout << "Contact list is full ! From now the oldest contact will be replaced." << std::endl;
		}
	}
	else
	{
		std::cout << "Contact num " << (_index % 8 + 1) << " replaced successfully !" << std::endl;
		_index = 1;
	}
}

void	PhoneBook::GetContact(void){
	int	contact_num;

	contact_num = std::stoi(GetInfos("Enter the contact number you want to search"));
	if (contact_num < 0 || contact_num > 8)
	{
		std::cout << "Please enter a number between 0 and 8 !" << std::endl;
		while (contact_num < 0 || contact_num > 8)
		{
			contact_num = std::stoi(GetInfos("Enter the contact number you want to search"));
			if (contact_num < 0 || contact_num > 8)
				std::cout << "Please enter a number between 0 and 8 !" << std::endl;
		}
	}
	_contact[contact_num].DisplayContact();
}

std::string PhoneBook::GetInfos(std::string type) {
	std::string	str;

	str = "";
	while (str.empty())
	{
		std::cout << type << ": ";
		std::getline(std::cin,str);
		if (str.empty())
			std::cout << "This field cannot be empty !" << std::endl;
	}
	return (str);
}