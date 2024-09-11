/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook_utils.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 14:35:37 by ekose             #+#    #+#             */
/*   Updated: 2024/08/31 15:02:56 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string ft_trim(std::string &str)
{
	size_t start;
	size_t end;

	start = str.find_first_not_of(" \n\t\v\r\f");
	if (start == std::string::npos)
		return "";
	
	end = str.find_last_not_of(" \n\t\v\r\f");
	str = str.substr(start, end - start + 1);
	return (str);
}
void ft_error(void)
{
	std::cout << "This field cannot be left blank..." << std::endl;
}

bool ft_check_number(std::string &str)
{
	std::string::const_iterator it;

	it = str.begin();
	while(it != str.end())
	{
		if (!std::isdigit(*it))
			return (false);
		++it;
	}
	return (true);
}

void ft_print_header(void)
{
    std::cout<< "\033[1;35m" << std::setw(10) << std::right << "Index" << " | "
              << std::setw(10) << std::right << "Name" << " | "
              << std::setw(10) << std::right << "Surname" << " | "
              << std::setw(10) << std::right << "Nickname" << std::endl;
    std::cout << std::string(10 * 4 + 12, '-') << "\033[0m" <<std::endl;
}

std::string ft_truncate_and_addDot(const std::string& str) 
{
    if (str.length() > 10) {
        return str.substr(0, 9) + ".";
    }
    return str;
}
void	ft_print_person (int index, std::string name, std::string surname, std::string nickname)
{
	std::cout << "\033[1;35m" << std::right << "|" << std::setw(10) << index;
	std::cout << "| ";
	if(name.length() > 10)
		std::cout << std::setw(12) << std::left << name.substr(0,9) + ".";
	else
		std::cout<< std::setw(12) << std::left  << name;
	std::cout << "| ";
	if(surname.length() > 10)
		std::cout << std::setw(12) << std::left  << surname.substr(0,9) + ".";
	else
		std::cout << std::setw(12) << std::left  << surname;
	std::cout << "| ";
	if(nickname.length() > 10)
		std::cout << std::setw(12) << std::left << nickname.substr(0,9) + ".";
	else
		std::cout << std::setw(12) << std::left  << nickname;
	std::cout << "\033[0m";
}