/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 16:01:20 by ekose             #+#    #+#             */
/*   Updated: 2024/09/02 15:08:25 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"
#include <fstream>

int main(int ac, char** argv)
{
	if (ac != 4){	
		std::cout << "number of invalid arguments\n" << argv[0] <<" <filename> <s1> <s2>" << std::endl;
		return 1;
	}
	std::string s1(argv[2]);
	std::string s2(argv[3]);
	std::string	line;
	std::string inFileName(argv[1]);
	std::string outFileName = inFileName + ".replace";
	std::ifstream input;
	std::ofstream output;
	input.open(inFileName.c_str());
	if (!input.is_open())
	{
		std::cout << "Could not open file " << inFileName <<std::endl;
		return 1;
	}
	
	output.open(outFileName.c_str());
	if(!output.is_open())
	{
		std::cout << "Could not open file " << outFileName <<std::endl;
		return 1;
	}
	
	while(std::getline(input, line))
	{
		Replace r(line);
		r.lineReplace(s1, s2);
		output << line << std::endl;
	}
	input.close();
	output.close();

}
