/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jverdu-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 19:10:58 by jverdu-r          #+#    #+#             */
/*   Updated: 2023/12/19 19:11:00 by jverdu-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie
{
    public:
        Zombie(void);

        ~Zombie(void);

        Zombie(std::string newName);

        void announce(void) const;
        void setName(std::string name);
        std::string getName(void);

    private:
        std::string name;
};

Zombie* newZombie(std::string name);
Zombie* zombieHorde(int n, std::string name);

void randomChump(std::string name);