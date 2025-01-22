/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 15:40:53 by ekose             #+#    #+#             */
/*   Updated: 2025/01/22 16:20:52 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <exception>
#include <iostream>
#include <cstdlib>
#include <ctime> 

class Base {
    public:
        virtual ~Base();
        Base* generate(void);
        void identify(Base* p);
        void identify(Base& p);
};

#endif