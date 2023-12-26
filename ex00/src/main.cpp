/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jverdu-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 10:59:52 by jverdu-r          #+#    #+#             */
/*   Updated: 2023/12/26 10:59:55 by jverdu-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../inc/zombie.hpp"

int main(void)
{
    Zombie *zombie_1 =  newZombie("Heap zombie");

    zombie_1->announce();
    randomChump("Stack zombie");
    delete(zombie_1);
    return (0);
}
