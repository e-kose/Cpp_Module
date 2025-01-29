/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 16:29:38 by ekose             #+#    #+#             */
/*   Updated: 2025/01/29 18:19:42 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **argv){
	if (ac != 2)
	{
		std::cout << "Number of invalid arguments\n";
		return 1;
	}
	
	
	RPN rpn;
	try{
		std::cout <<rpn.calculate(argv[1])<< std::endl;
		
	}catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
}