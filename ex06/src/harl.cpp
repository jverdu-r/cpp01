/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jverdu-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:42:41 by jverdu-r          #+#    #+#             */
/*   Updated: 2024/01/09 16:42:42 by jverdu-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/harl.hpp"

Harl::Harl(void){return;}
Harl::~Harl(void){return;}

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
    switch (i)
    {
    case 0:
        std::cout << "[debug]" << std::endl;
        (this->*p[0])();
        std::cout << std::endl;
    case 1:
        std::cout << "[info]" << std::endl;
        (this->*p[1])();
        std::cout << std::endl;
    case 2:
        std::cout << "[warning]" << std::endl;
        (this->*p[2])();
        std::cout << std::endl;
    case 3:
        std::cout << "[error]" << std::endl;
        (this->*p[3])();
        break;
    default:
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        break;
    }
}
