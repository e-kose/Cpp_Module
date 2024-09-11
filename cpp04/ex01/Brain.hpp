/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 16:34:22 by ekose             #+#    #+#             */
/*   Updated: 2024/09/10 18:00:57 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Brain{
	protected:
		std::string *ideas;
	public:
		Brain();
		~Brain();
		Brain(const Brain& copy);
		Brain& operator =(const Brain& src);
		std::string getIdea(int index)const;
		void setIdea(int index, const std::string& idea);
};
