/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekose <ekose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 15:40:18 by ekose             #+#    #+#             */
/*   Updated: 2025/01/22 16:33:56 by ekose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
Base::~Base() {}

Base* Base::generate(void)
{
    std::srand(static_cast<unsigned>(std::time(0)));
    int random = std::rand() % 3;
    if (random == 0)
    {
        std::cout << "A class generated" << std::endl;
        return new A();
    }
    else if (random == 1)
    {
        std::cout << "B class generated" << std::endl;
        return new B();
    }
    else
    {
        std::cout << "C class generated" << std::endl;
        return new C();
    }
}

void Base::identify(Base* p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
}

void Base::identify(Base& p)
{
    try
    {
        A& a = dynamic_cast<A&>(p);
        (void)a;
        std::cout << "A" << std::endl;
    }
    catch (std::exception& e)
    {
        (void)e;
    }
    try
    {
        B& b = dynamic_cast<B&>(p);
        (void)b;
        std::cout << "B" << std::endl;
    }
    catch (std::exception& e)
    {
        (void)e;
    }
    try
    {
        C& c = dynamic_cast<C&>(p);
        (void)c;
        std::cout << "C" << std::endl;
    }
    catch (std::exception& e)
    {
        (void)e;
    }
}