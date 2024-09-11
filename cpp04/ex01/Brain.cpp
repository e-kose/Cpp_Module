/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 16:39:47 by ekose             #+#    #+#             */
/*   Updated: 2024/09/10 18:01:36 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
	std::cout << "Brain consturcter called" << std::endl;
	this->ideas = new std::string[100];
}

Brain::Brain(const Brain& copy){
    std::cout << "Brain copy constructor called" << std::endl;
    this->ideas = new std::string[100];
    for (int i = 0; i < 100; i++)
        this->ideas[i] = copy.ideas[i];
}

Brain& Brain::operator=(const Brain& src){
	if(this == &src)
		return (*this);	
	delete []this->ideas;
	this->ideas = new std::string[100];
	    for (int i = 0; i < 100; i++) {
        this->ideas[i] = src.ideas[i];
    }
	return (*this);
}

Brain::~Brain(){
	std::cout << "Brain destructor called" << std::endl;
	delete []this->ideas;
}

void Brain::setIdea(int index, const std::string& idea) {
        if (index >= 0 && index < 100) {
            this->ideas[index] = idea;
        }
}
std::string Brain::getIdea(int index) const {
    if (index >= 0 && index < 100) {
        return this->ideas[index];
    }
	return "";
}