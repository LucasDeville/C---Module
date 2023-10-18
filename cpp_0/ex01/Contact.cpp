/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 14:17:54 by ldeville          #+#    #+#             */
/*   Updated: 2023/10/18 18:21:00 by ldeville         ###   ########.fr       */
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

void	Contact::DisplayContact(void) {
	if (_fname.empty())
	{
		std::cout << "This contact does not exist yet." << std::endl;
		return ;
	}
	/*
		DISPLAY CONTACT
	*/
}