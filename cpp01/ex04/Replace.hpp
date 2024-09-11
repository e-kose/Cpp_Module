/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 16:03:57 by ekose             #+#    #+#             */
/*   Updated: 2024/08/31 18:29:25 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

# include <iostream>

class Replace{
	private:
		std::string& line;
	public:
		Replace(std::string& line);
		~Replace(void);
		void lineReplace(const std::string s1 ,const std::string s2);
};
#endif
