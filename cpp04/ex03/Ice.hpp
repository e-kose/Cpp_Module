/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 13:40:38 by ekose             #+#    #+#             */
/*   Updated: 2024/09/11 15:38:52 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice: public AMateria{
	public:
		Ice(void);
		Ice(const Ice& copy);
		Ice& operator=(const Ice& src);
		~Ice(void);
		void use(ICharacter& target);
		AMateria* clone(void)const;
};