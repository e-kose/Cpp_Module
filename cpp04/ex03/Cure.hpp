/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 14:10:58 by ekose             #+#    #+#             */
/*   Updated: 2024/09/11 17:06:21 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "AMateria.hpp"
# include <iostream>

class Cure: public AMateria{
	public:
		Cure(void);
		Cure(const Cure& copy);
		Cure& operator =(const Cure& src);
		~Cure(void);
		void use(ICharacter& target);
		AMateria* clone(void)const;
};
