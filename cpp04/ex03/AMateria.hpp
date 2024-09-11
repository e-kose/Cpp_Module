/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 12:31:08 by ekose             #+#    #+#             */
/*   Updated: 2024/09/11 16:48:53 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 
# include <iostream>
# include "ICharacter.hpp"

class ICharacter ;

class AMateria{
	protected:
		std::string type;
	public:
		AMateria(void);
		AMateria(std::string type);
		AMateria(const AMateria& copy);
		virtual ~AMateria(void);
		std::string const& getType(void) const;		
		virtual AMateria* clone(void) const = 0;
		virtual void use(ICharacter& target);
};