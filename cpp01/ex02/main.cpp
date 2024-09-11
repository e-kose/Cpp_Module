/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 12:54:34 by ekose             #+#    #+#             */
/*   Updated: 2024/09/02 15:00:19 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	
	std::string* stringPTR = &str;
	std::string& stringREF = str;
	
	std::cout << "str adresi => " << &str << std::endl;
	std::cout << "stringPTR adresi => " << &stringPTR << std::endl;
	std::cout << "stringREF adresi => " << &stringREF << std::endl << std::endl;
	std::cout << "str'nin değeri => " << str << std::endl;
	std::cout << "stringPTR değeri => " << *stringPTR << std::endl;
	std::cout << "stringRef değerin => " << stringREF << std::endl;
		
}
