/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jverdu-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 15:36:55 by jverdu-r          #+#    #+#             */
/*   Updated: 2023/12/26 15:36:59 by jverdu-r         ###   ########.fr       */
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
        void    setWeapon(Weapon &weapon);
        void    attack(void);
};
#endif