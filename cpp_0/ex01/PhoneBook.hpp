/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:14:31 by ldeville          #+#    #+#             */
/*   Updated: 2023/10/18 17:28:11 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

class PhoneBook {

private :
	Contact _contact[8];
	int		_index;
	bool	_max_contact;

public :
	PhoneBook(void);
	~PhoneBook(void);

	void		AddContact(void);
	void		GetContact(void);
	std::string	GetInfos(std::string type);
	
};


#endif