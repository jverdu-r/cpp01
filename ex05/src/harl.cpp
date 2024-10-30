/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jverdu-r <jverdu-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:41:27 by jverdu-r          #+#    #+#             */
/*   Updated: 2024/10/30 11:18:00 by jverdu-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/harl.hpp"

Harl::Harl(void){return;}
Harl::~Harl(void){return;}

Harl& Harl::operator=(Harl const& origin)
{
    static_cast<void>(origin);
    return (*this);
}

void Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}
void Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}
void Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}
void Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
void Harl::complain(std::string lvl)
{
    std::string st[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*p[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    int i = 0;
    
    while (i < 4 && st[i].compare(lvl) != 0)
        i++;
    if (i > 3)
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    else
        (this->*p[i])();
}
