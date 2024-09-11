/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 14:41:49 by ekose             #+#    #+#             */
/*   Updated: 2024/09/01 15:49:03 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
	void(Harl::* ptr)(std::string) = &Harl::complain;

	Harl object;

	(object.*ptr) ("ERROR");
	(object.*ptr) ("WARNING");
	(object.*ptr) ("DEBUG");
	(object.*ptr) ("INFO");
}
