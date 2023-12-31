/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jverdu-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:41:31 by jverdu-r          #+#    #+#             */
/*   Updated: 2024/01/09 16:41:34 by jverdu-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/harl.hpp"

int main(int argc, char **argv)
{
    Harl harl;

    for (int i = 1; i < argc; i++)
    {
        harl.complain(argv[i]);
        std::cout << std::endl;
    }
    return (0);
}
