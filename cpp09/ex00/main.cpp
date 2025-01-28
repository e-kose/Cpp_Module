/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 16:26:56 by ekose             #+#    #+#             */
/*   Updated: 2025/01/28 20:46:19 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <iostream>
#include <limits>
int main(int ac , char **argv){
	
	try{
		if(ac != 2){
			std::cout << "Number of invalid arguments\n"; 
			return 1;
		}
		BitcoinExchange exchange(argv[1]);
		exchange.printData();
	}catch(int e){}
}