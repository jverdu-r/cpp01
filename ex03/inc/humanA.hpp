/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jverdu-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 15:36:46 by jverdu-r          #+#    #+#             */
/*   Updated: 2023/12/26 15:36:48 by jverdu-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP

#include "weapon.hpp"

class HumanA
{
    private:
        std::string name;
        Weapon      &weapon;

    public:
        ~HumanA(void);
        HumanA(std::string name, Weapon &weapon);
        void    attack(void);
};
#endif