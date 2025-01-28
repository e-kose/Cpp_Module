/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 16:59:35 by ekose             #+#    #+#             */
/*   Updated: 2025/01/28 13:02:12 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack() {}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack<T>& other) : std::stack<T>(other) {}

template <typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack<T>& other) {
    if (this != &other) {
        std::stack<T>::operator=(other);
    }
    return *this;
}

template <typename T>
MutantStack<T>::~MutantStack<T>(){}

template <typename T>
void MutantStack<T>::pop(){
    stck.erase(this->stck.begin(), this->stck.begin() + 1);
}

template <typename T>
bool MutantStack<T>::empyt()const{
    if(this->stck.size() == 0)
        return true;
    return false;
}

template <typename T>
size_t MutantStack<T>::size()const{
    return this->stck.size();
}

template <typename T>
T MutantStack<T>::top()const{
    return this->stck.front();
}

template <typename T>
void MutantStack<T>::push(const T& val){
    
    this->stck.insert(this->stck.begin(),val);
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin(){
    return this->stck.begin();
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end(){
    return this->stck.end();
}