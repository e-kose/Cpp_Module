/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 18:52:31 by ekose             #+#    #+#             */
/*   Updated: 2024/09/08 15:53:38 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

class DiamondTrap : public ScavTrap, public FragTrap {
	private: 
		std::string name;
	public :
		DiamondTrap(void);
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap& copy);
		DiamondTrap& operator=(const DiamondTrap& src);
		~DiamondTrap(void);
		void whoAmI(void);
		void attack(const std::string& target);
};