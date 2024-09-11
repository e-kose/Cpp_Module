/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 13:15:21 by ekose             #+#    #+#             */
/*   Updated: 2024/09/02 12:28:23 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void){}
Harl::~Harl(void){}

void Harl::complain(std::string level)
{
	int i = 0;
	void (Harl::*complains[4]) (void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	while(i < 4)
	{
		if(level == levels[i])
			break;
		i++;
	}
	switch (i)
	{
	case 0:
		(this->*complains[0])();
		break;
	case 1:
		(this->*complains[1])();
		break;
	case 2:
		(this->*complains[2])();
		break;
	case 3:
		(this->*complains[3])();
	default:
		break;
	}
}
void Harl::debug(void)
{
	std::cout << GREEN << "[DEBUG]\033[0m" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-" 
	<< "cheese-triple-pickle-specialketchup burger. "
	<<  "I really do!”" << std::endl;
}

void Harl::info(void)
{
	std::cout << YELLOW << "[INFO]\033[0m" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money.  "
	<< "You didn’t put enough bacon in my burger! "
	<< "If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
	std::cout << BLUE << "[WARNING]\033[0m" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. "
	<<"I’ve been coming for years whereas you started working here since last month."
	<< std::endl;
}
void Harl::error(void)
{
	std::cout << RED << "[ERROR]\033[0m"<< std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
