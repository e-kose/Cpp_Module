/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 15:43:55 by ekose             #+#    #+#             */
/*   Updated: 2024/09/11 16:03:57 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "IMateriaSource.hpp"
# include <iostream>

class MateriaSource : public IMateriaSource{
	private:
		int count;
		AMateria *materials[4];
	public: 
		MateriaSource(void);
		MateriaSource(const MateriaSource& copy);
		MateriaSource& operator =(const MateriaSource& src);
		~MateriaSource(void);
		void learnMateria(AMateria *m);
		AMateria* createMateria(std::string const& type);	
};