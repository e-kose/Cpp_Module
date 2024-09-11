/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 16:04:22 by ekose             #+#    #+#             */
/*   Updated: 2024/09/11 16:13:40 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void){
	this->count = 0;
	for (int i = 0; i < 4; i++)
		this->materials[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& copy)
{
	this->count = copy.count;
	for (int i = 0; i < 4; i++){
		if (copy.materials[i])
			this->materials[i] = copy.materials[i]->clone();
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource& src){
	if (this == &src)
		return (*this);
	this->count = src.count;
	for (int i = 0; i < 4; i++){
		if (this->materials[i])
			delete this->materials[i];
	}
	for (int i = 0; i < 4; i++){
		if (src.materials[i])
			this->materials[i] = src.materials[i]->clone();
	}
	return (*this);
}

MateriaSource::~MateriaSource(void){

	for (int i = 0; i < 4; i++){
		if (this->materials[i])
			delete this->materials[i];
	}
}

void MateriaSource::learnMateria(AMateria* materia){
	
	if(materia && count < 4){
		this->materials[this->count] = materia;
		this->count++;
	}
}

AMateria* MateriaSource::createMateria(std::string const& type){
	
	for(int i = 0; i < 4; i++) {
		if (this->materials[i] && this->materials[i]->getType() == type) {
			return (this->materials[i]->clone());
		}
	}
	return (0);
}