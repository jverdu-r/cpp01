/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jverdu-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 15:37:45 by jverdu-r          #+#    #+#             */
/*   Updated: 2023/12/26 15:37:46 by jverdu-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/weapon.hpp"

Weapon::Weapon(void){return;}

Weapon::~Weapon(void){return;}

Weapon::Weapon(std::string type)
{
    this->type = type;
}
void Weapon::setType(std::string type)
{
    this->type = type;
}

std::string Weapon::getType(void)
{
    return (this->type);
}