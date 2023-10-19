/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 14:17:54 by ldeville          #+#    #+#             */
/*   Updated: 2023/10/19 11:07:18 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "common.h"

Contact::Contact(void) {

}

Contact::~Contact(void) {

}

void	Contact::SetContact(std::string a, std::string b, std::string c, std::string d, std::string e) {
	_fname = a;
	_lname = b;
	_nickname = c;
	_phone_num = d;
	_secret = e;
}

void	Contact::InfosContacts(int index) {
	std::cout << "|" << std::setw(10) << index;
	std::cout << "|" << std::setw(10) << _fname;
	std::cout << "|" << std::setw(10) << _lname;
	std::cout << "|" << std::setw(10) << _nickname << "|" << std::endl;
}

void	Contact::DisplayContact(void) {
	if (_fname.empty())
	{
		std::cout << "This contact does not exist yet." << std::endl;
		return ;
	}
	std::cout << "[--]" << std::endl;
	std::cout << "First Name : " << _fname << std::endl;
	std::cout << "Last Name : " << _lname << std::endl;
	std::cout << "Nickname : " << _nickname << std::endl;
	std::cout << "Phone number : " << _phone_num << std::endl;
	std::cout << "Darkest secret: " << _secret << std::endl;
	std::cout << "[--]" << std::endl;
}