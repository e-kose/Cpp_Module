/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 13:59:06 by ekose             #+#    #+#             */
/*   Updated: 2025/01/22 14:33:13 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(void){
    Data *data  = new Data;
    data->x = 5 , data->y = 10 , data->z = 'a' , data->t = false;
    
    uintptr_t raw = Serializer::serialize(data);
    Data *ptr = Serializer::deserialize(raw);
    std::cout << "Data Adress: " << data << std::endl;
    std::cout << "Ptr Adress: " << ptr << std::endl;
    std::cout << "Data: " << ptr->x << " " << ptr->y << " " << ptr->z << " " << ptr->t << std::endl;
    
    delete data;
    
}