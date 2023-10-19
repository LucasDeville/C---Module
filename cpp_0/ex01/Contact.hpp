/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldeville <ldeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:19:22 by ldeville          #+#    #+#             */
/*   Updated: 2023/10/19 10:57:12 by ldeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

class Contact {
	
private :
	std::string _fname;
	std::string _lname;
	std::string _nickname;
	std::string _phone_num;
	std::string _secret;

public :
	Contact(void);
	~Contact(void);
	
	void	SetContact(std::string a, std::string b, std::string c, std::string d, std::string e);
	void	DisplayContact(void);
	void	InfosContacts(int index);
	bool	EmptyContact(void) { return _fname.empty(); };
};


#endif