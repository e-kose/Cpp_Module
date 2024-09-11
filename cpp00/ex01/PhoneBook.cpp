/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 14:13:30 by ekose             #+#    #+#             */
/*   Updated: 2024/09/11 16:30:57 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->index_ = -1;
}
PhoneBook::~PhoneBook(void)
{
	return ;
}
void PhoneBook::ft_add(void)
{
	std::string str;
	++this->index_;
	if(this->index_ == 0)
		std::cout << "WELCOME :)\n\n";
	while(true)
	{
		std::cout << "Firstname\n-> ";
		std::getline(std::cin, str);
		if (ft_trim(str) != "" || std::cin.eof())
		{
			this->persons[this->index_ % 8].ft_set_name(str);
			break;
		}
		ft_error();
	}
	while(true)
	{
		std::cout << "Lastname\n-> ";
		std::getline(std::cin, str);
		if (ft_trim(str) != "" || std::cin.eof())
		{
			this->persons[this->index_ % 8].ft_set_surname(str);
			break;
		}
		ft_error();
	}
	while(true)
	{
		std::cout << "Nickname\n-> ";
		std::getline(std::cin, str);
		if (ft_trim(str) != "" || std::cin.eof())
		{
			this->persons[this->index_ % 8].ft_set_nickname(str);
			break;
		}
		ft_error();
	}
	while(true)
	{
		std::cout << "Number\n-> ";
		std::getline(std::cin, str);
		if (ft_trim(str) != "" || std::cin.eof())
		{	
			if(ft_check_number(str))	
			{
				this->persons[this->index_ % 8].ft_set_number(atoi(str.c_str()));
				break;
			}
			std::cout << RED << "Number cannot contain alphanumeric characters\033[0m\n";
			continue;
		}
		ft_error();
	}
	while(true)
	{
		std::cout << "Dark Secret\n-> ";
		std::getline(std::cin, str);
		if (ft_trim(str) != "" || std::cin.eof())
		{
			this->persons[this->index_ % 8].ft_set_secret(str);
			break;
		}
		ft_error();
	}
}

void PhoneBook::ft_search()
{
	int index;
	
	index = 0;
	ft_print_header();
	while(index <= this->index_ && index < 8)
	{
		ft_print_person(index, this->persons[index].ft_get_name(), this->persons[index].ft_get_surname(),
			this->persons[index].ft_get_nickname());	
		std::cout<<std::endl;	
		index++;
	}
	while(true)
	{	
		std::cout << "Enter the index of the person you want to view\n->";
		std::cin >> index;
		if (std::cin.eof())
			return ;
		if (std::cin.fail()) 
		{
            std::cin.clear();
            std::cout << RED << "Invalid input, please enter an integer.\033[0m" << std::endl;
			continue;
		}

		if(index <= this->index_ && index < 8 && this->index_ >= 0 && index > -1)
		{
			std::cout << std::right << "\033[1;30mFirstname : " << this->persons[index].ft_get_name() << std::endl;
			std::cout << std::right << "Surname : " << this->persons[index].ft_get_surname() << std::endl;
			std::cout << std::right << "Number : " << this->persons[index].ft_get_number() << std::endl;
			std::cout << std::right << "Nickname : " <<  this->persons[index].ft_get_nickname() << std::endl;
			std::cout << std::right << "Dark Secret : " << this->persons[index].ft_get_secret() << "\033[0m" <<std::endl;
			break ;
		}
		if(this->index_ < 0)
		{
			std::cout<< RED << "Phone book is empty first add a contact " << "\033[0m"<< std::endl;
			return ;
		}
		else
			std::cout << RED << "Invalid index please re-ente\n" << "\033[1;32mMinimum index 0 max index "<< this->index_<< "\033[0m" <<std::endl;
	}	
	
}