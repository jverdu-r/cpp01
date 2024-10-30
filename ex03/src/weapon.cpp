/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jverdu-r <jverdu-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 15:37:45 by jverdu-r          #+#    #+#             */
/*   Updated: 2024/10/30 10:39:45 by jverdu-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/weapon.hpp"

Weapon::Weapon(void){return;}

Weapon::~Weapon(void){return;}

Weapon::Weapon(std::string type)
{
    this->type = type;
}

Weapon& Weapon::operator=(Weapon const& origin)
{
    this->type = origin.type;
    return (*this);
}
void Weapon::setType(std::string type)
{
    this->type = type;
}

std::string Weapon::getType(void)
{
    return (this->type);
}