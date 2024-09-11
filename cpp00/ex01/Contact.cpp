/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 19:55:13 by ekose             #+#    #+#             */
/*   Updated: 2024/08/25 19:22:56 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::ft_set_name(std::string name)
{
	this->Name = name;
}

void Contact::ft_set_surname(std::string surname)
{
	this->Surname = surname;
}

void Contact::ft_set_number(int number)
{
	this->PhoneNumber = number;	
}

void Contact::ft_set_nickname(std::string nickname)
{
	this->Nickname = nickname;
}

void Contact::ft_set_secret(std::string secret)
{
	this->Secret = secret;
}

std::string Contact::ft_get_name()const
{
	return (this->Name);
}

int Contact::ft_get_number() const
{
	return (this->PhoneNumber);
}

std::string Contact::ft_get_surname()const
{
	return (this->Surname);
}

std::string Contact::ft_get_nickname()const
{
	return (this->Nickname);
}

std::string Contact::ft_get_secret()const
{
	return (this->Secret);
}