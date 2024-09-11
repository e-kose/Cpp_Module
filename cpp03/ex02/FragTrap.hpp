/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 17:25:51 by ekose             #+#    #+#             */
/*   Updated: 2024/09/07 17:28:40 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap{
	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(const FragTrap& copy);
		FragTrap& operator=(const FragTrap& src);
		~FragTrap(void);
		void highFivesGuys(void);		
};