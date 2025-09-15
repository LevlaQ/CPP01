/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyildiz <gyildiz@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 19:18:02 by gyildiz           #+#    #+#             */
/*   Updated: 2025/09/15 13:54:16 by gyildiz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WordOffice.hpp"

void	close_files(std::ifstream &ifs, std::ofstream &ofs)
{
	ifs.close();
	ofs.close();
}

int	main(int ac, char **av)
{
	std::string	str;
	std::string ofname;

	if (ac != 4)
	{
		std::cout << "Invalid arguments, write: <program name> <filename> <str1> <str2>\n";
		return (0);
	}
	std::ifstream ifs(av[1]);
	if (!(ifs.is_open()))
	{
		std::cerr << "ERROR: Cannot open the given file!\n";
		return (1);
	}
	ofname = (std::string)av[1] + ".replace";
	std::ofstream ofs(ofname);
	if (!(ofs.is_open()))
	{
		std::cerr << "ERROR: Cannot create the x.replace file!\n";
		return (1);
	}
	while (std::getline(ifs, str))
	{
		if(ifs.eof())
		{
			str = replace(str, av[2], av[3]);
			ofs << str;
		}
		else
		{
			str = replace(str, av[2], av[3]);
			ofs << str << "\n";
		}
		if (ofs.fail())
		{
			std::cerr << "ERROR: Writing failed\n";
			close_files(ifs, ofs);
			return (1);
		}
	}
	if (ifs.bad())
	{
		std::cerr << "ERROR: Reading failed\n";
		close_files(ifs, ofs);
		return (1);
	}
	close_files(ifs, ofs);
}
