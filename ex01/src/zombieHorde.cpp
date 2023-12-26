/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jverdu-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 11:58:08 by jverdu-r          #+#    #+#             */
/*   Updated: 2023/12/26 11:58:10 by jverdu-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/zombie.hpp"

Zombie* zombieHorde(int n, std::string name)
{
    std::string names[n];
    Zombie *zombies = new Zombie[n];

    for (int i = 0; i < n; i++)
        zombies[i].setName(name);
    return (zombies);
}