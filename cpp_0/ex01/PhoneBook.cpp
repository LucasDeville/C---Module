/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:17:21 by ldeville          #+#    #+#             */
/*   Updated: 2023/10/19 17:16:02 by ldeville         ###   ########.fr       */
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
		_index++;
		if (_index == 8)
			_index = 0;
	}
}

void	PhoneBook::GetContact(void){

	std::cout << "[//]" << std::endl;
	std::cout << "|" << std::setw(10) << "Index";
	std::cout << "|" << std::setw(10) << "First Name";
	std::cout << "|" << std::setw(10) << "Last Name";
	std::cout << "|" << std::setw(10) << "Nickname" << "|" << std::endl;
	for(int i = 0; i < 8; i++) 
	{
		if (_contact[i].EmptyContact())
			break;
		_contact[i].InfosContacts(i + 1);
	}
	std::cout << "[//]" << std::endl;
	GetContactAt();
}

std::string	PhoneBook::IsNum(std::string str) {
	
	if (str.length() == 1 && isdigit((char)str[0]))
		return (str);
	else
		return ("0");
}

void	PhoneBook::GetContactAt(void) {
	int			contact_num;

	contact_num = std::stoi(IsNum(GetInfos("Enter the contact number you want to search")));
	if (contact_num < 1 || contact_num > 8)
	{
		std::cout << "Please enter a number between 0 and 9 !" << std::endl;
		while (contact_num < 1 || contact_num > 8)
		{
			contact_num = std::stoi(IsNum(GetInfos("Enter the contact number you want to search")));
			if (contact_num < 1 || contact_num > 8)
				std::cout << "Please enter a number between 0 and 9 !" << std::endl;
		}
	}
	_contact[contact_num - 1].DisplayContact();
}

bool	PhoneBook::HasSpace(std::string str) {
	bool	space;

	space = false;
	for (int i = 0; i < str.size(); ++i)
		if ((char)str[i] == ' ' || (char)str[i] == '	')
			space = true;;
	return (space);
}

std::string PhoneBook::GetInfos(std::string type) {
	std::string	str;

	str = "";
	while (str.empty() || HasSpace(str))
	{
		std::cout << type << ": ";
		std::getline(std::cin,str);
		if (str.empty() || HasSpace(str))
			std::cout << "This field cannot be empty or contain spaces !" << std::endl;
	}
	return (str);
}