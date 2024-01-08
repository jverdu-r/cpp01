/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jverdu-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 18:11:32 by jverdu-r          #+#    #+#             */
/*   Updated: 2024/01/08 18:11:34 by jverdu-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
    std::string filename, outfile, s1, s2, aux;
    std::fstream filein, fileout;
    int i, j;
    char c;

    if (argc != 4)
    {
        std::cerr << "ERROR: Missing arguments." << std::endl;
        return (1);
    }
    filename = argv[1];
    outfile = filename + ".replace";
    s1 = argv[2];
    s2 = argv[3];

    filein.open(filename.c_str(), std::ios::in);
    if (!filein)
    {
        std::cerr << "ERROR: Unable to open file " << filename << "." << std::endl;
        return (1);
    }
    fileout.open(outfile.c_str(), std::ios::out);
    if (!fileout)
    {
        std::cerr << "ERROR: Unable to open file " << outfile << "." << std::endl;
        return (1);
    }
    j = 0;
    while (!filein.eof())
    {
        if (j == 0)
        {
            filein >> std::noskipws >> c;
        }
        else
            j = 0;
        if (filein.eof())
            break;
        if (c == s1.c_str()[0])
        {
            aux = "";
            aux.append(1,c);
            i = 1;
            while (i < (int)s1.length() && !filein.eof())
            {
                filein >> std::noskipws >> c;
                if (c != s1.c_str()[i])
                {
                    j = 1;
                    break;
                }
                aux.append(1, c);
                i++;
                std::cout << i << std::endl;
            }
            if (i == (int)s1.length())
                fileout << s2;
            else
                fileout << aux;
        }
        else
            fileout << c;
    }
}
