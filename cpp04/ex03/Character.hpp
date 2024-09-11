/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 14:28:35 by ekose             #+#    #+#             */
/*   Updated: 2024/09/11 15:10:53 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character: public ICharacter{
	private:
		std::string name;
		AMateria* environment[4];
	public:
		Character(std::string name);
		Character(const Character& copy);
		Character& operator=(const Character& src);
		~Character(void);
		std::string const& getName(void)const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};