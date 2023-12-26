/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jverdu-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 12:35:57 by jverdu-r          #+#    #+#             */
/*   Updated: 2023/12/26 12:35:59 by jverdu-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    std::string str = "HI THIS BRAIN";
    std::string stringPTR = str;
    std::string* stringREF = &str;

    std::cout << "memory address to str: " << &str << " and its value is: " << str << std::endl;
    std::cout << "memory address to stringPTR: " << &stringPTR << " and its value is: " << stringPTR << std::endl; 
    std::cout << "memory address to stringREF: " << &stringREF << " and its value is: " << stringREF << std::endl; 
    return (0);
}