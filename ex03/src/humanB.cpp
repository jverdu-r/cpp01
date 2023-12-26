/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jverdu-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 15:37:34 by jverdu-r          #+#    #+#             */
/*   Updated: 2023/12/26 15:37:40 by jverdu-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/humanB.hpp"

HumanB::HumanB(void){return;}

HumanB::~HumanB(void){return;}

HumanB::HumanB(std::string name)
{
    this->name = name;
    this->weapon = NULL;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}

void HumanB::attack(void)
{
    if (this->weapon == NULL || this->weapon->getType().empty())
        std::cout << this->name << " attacks with his bare hands" << std::endl;
    else
        std::cout << this->name << " attacks with a " << this->weapon->getType() << std::endl; 
}