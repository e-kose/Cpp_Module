/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 18:05:49 by ekose             #+#    #+#             */
/*   Updated: 2024/09/07 18:05:54 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class ClapTrap{
	protected:
		std::string name;
		int hitPoints;
		int energyPoints;
		int attackDamage;
	public:
		ClapTrap(void);
		ClapTrap(std::string);
		ClapTrap(const ClapTrap& copy);
		ClapTrap& operator=(const ClapTrap& src);
		~ClapTrap(void);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);	
		void setAttackDamage(int damage);
		int	getAttackDamage(void)const;
		void setHitPoints(int hitPoint);
		int getHitPoints(void)const;
		void setEnergyPoint(int energyPoint);
		int getEnergyPoint(void)const;
};