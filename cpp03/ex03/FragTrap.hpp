/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 18:06:14 by ekose             #+#    #+#             */
/*   Updated: 2024/09/08 14:19:04 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap{
	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(const FragTrap& copy);
		FragTrap& operator=(const FragTrap& src);
		~FragTrap(void);
		void highFivesGuys(void);		
};