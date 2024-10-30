/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jverdu-r <jverdu-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 19:10:58 by jverdu-r          #+#    #+#             */
/*   Updated: 2024/10/30 10:32:33 by jverdu-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie
{
    public:
        Zombie(void);

        ~Zombie(void);

        Zombie(std::string newName);
        
        Zombie &operator=(Zombie const &zombie);

        void announce(void) const;

    private:
        std::string name;
};

Zombie* newZombie(std::string name);

void randomChump(std::string name);