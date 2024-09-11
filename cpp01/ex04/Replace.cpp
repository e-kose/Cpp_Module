/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 17:16:49 by ekose             #+#    #+#             */
/*   Updated: 2024/09/02 15:14:03 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

Replace::Replace(std::string& line): line(line){}
Replace::~Replace(void){}

void Replace::lineReplace(const std::string s1, const std::string s2)
{
   if (s1.empty()) return;

	std::string result;
	std::string::size_type pos = 0;
	std::string::size_type s1_len = s1.length();
	while (true) 
	{
		std::string::size_type found = line.find(s1, pos);
		if (found == std::string::npos)
		{
			result.append(line.substr(pos));
			break;
		}
		result.append(line.substr(pos, found - pos));
		result.append(s2);
		pos = found + s1_len;
	}
	line = result;
}
	

