/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 13:49:35 by ekose             #+#    #+#             */
/*   Updated: 2025/01/22 14:31:29 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include <stdint.h>
struct Data
{
    int x;
    int y;
    bool t;
    char z;
};
class Serializer{
    private:
        Serializer();
        ~Serializer();
        Serializer(const Serializer &other);
        Serializer &operator=(const Serializer &other);
    public:
        static uintptr_t serialize(Data *ptr);
        static Data* deserialize(uintptr_t raw);
};

#endif