/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jverdu-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 19:11:05 by jverdu-r          #+#    #+#             */
/*   Updated: 2023/12/19 19:11:08 by jverdu-r         ###   ########.fr       */
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

void    Zombie::announce(void) const
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}