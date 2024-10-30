/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jverdu-r <jverdu-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 15:36:55 by jverdu-r          #+#    #+#             */
/*   Updated: 2024/10/30 10:37:11 by jverdu-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP

#include "weapon.hpp"

class HumanB
{
    private:
        std::string name;
        Weapon      *weapon;
        
    public:
        HumanB(void);
        ~HumanB(void);
        HumanB(std::string name);
        HumanB &operator=(HumanB const &humanB);
        void    setWeapon(Weapon &weapon);
        void    attack(void);
};
#endif