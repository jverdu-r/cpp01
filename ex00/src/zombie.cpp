/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jverdu-r <jverdu-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 19:11:05 by jverdu-r          #+#    #+#             */
/*   Updated: 2024/10/30 10:33:28 by jverdu-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/zombie.hpp"

Zombie::Zombie(void){return;}

Zombie::~Zombie(void)
{
    std::cout << this->name << ": is returning to the grave..." << std::endl; 
}

Zombie::Zombie(std::string newName)
{
    this->name = newName;
}
Zombie& Zombie::operator=(Zombie const& origin)
{
    this->name = origin.name;
    return (*this);
}

void    Zombie::announce(void) const
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}