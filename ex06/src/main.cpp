/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jverdu-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:42:46 by jverdu-r          #+#    #+#             */
/*   Updated: 2024/01/09 16:42:47 by jverdu-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/harl.hpp"

int main(int argc, char **argv)
{
    Harl harl;

    if (argc > 2)
    {
        std::cerr << "ERROR: too many arguments." << std::endl;
        return (1);
    }
    harl.complain(argv[1]);
    return (0);
}
