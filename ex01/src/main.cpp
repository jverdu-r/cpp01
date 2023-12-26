/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jverdu-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 12:11:29 by jverdu-r          #+#    #+#             */
/*   Updated: 2023/12/26 12:11:31 by jverdu-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/zombie.hpp"

int main(void)
{
    std::string name;
    Zombie* zombies;
    int n_zombies = -1;

    while (n_zombies < 0)
    {
        std::cout << "Enter the desired number of zombies to be in the horde: ";
        std::cin >> n_zombies;
        if (n_zombies < 0)
            std::cout << "Please enyer a positive number" << std::endl;
    }
    std::cout << std::endl << "Now give them a name: ";
    std::cin >> name;
    std::cout << std::endl << "horde in progress..." << std::endl;
    zombies = zombieHorde(n_zombies, name);
    for (int i = 0; i < n_zombies; i++)
    {
        std::cout << i << ": ";
        zombies[i].announce();
        std::cout << std::endl;
    }
    return (0);
}