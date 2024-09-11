/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 15:38:56 by ekose             #+#    #+#             */
/*   Updated: 2024/09/07 14:29:05 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

#include <iostream>

class ClapTrap{
	private:
		std::string name;
		int hitPoints;
		int energyPoints;
		int attackDamage;
	public:
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
#endif