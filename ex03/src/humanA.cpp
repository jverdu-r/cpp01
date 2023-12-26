/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jverdu-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 15:37:22 by jverdu-r          #+#    #+#             */
/*   Updated: 2023/12/26 15:37:23 by jverdu-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/humanA.hpp"

HumanA::~HumanA(void){return;}
HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon)
{
    this->name = name;
}

void HumanA::attack(void)
{
    if (this->weapon.getType().empty())
        std::cout << this->name << " attacks with his bare hands" << std::endl;
    else
        std::cout << this->name << " attacks with a " << this->weapon.getType() << std::endl;
}