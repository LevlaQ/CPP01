/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyildiz <gyildiz@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 14:49:20 by gyildiz           #+#    #+#             */
/*   Updated: 2025/09/15 15:09:35 by gyildiz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{}

Harl::~Harl()
{}

void	Harl::complain(std::string level)
{
	int i = 0;
	std::string arr[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*func[4])(void);
	
	func[0] = &Harl::debug;
	func[1] = &Harl::info;
	func[2] = &Harl::warning;
	func[3] = &Harl::error;
	while (i < 4)
	{
		if (level == arr[i])
			break;
		i++;
	}
	if (i < 4)
		(this->*func[i])();
	if (i >= 4)
		std::cout << "[ Probably complaining about insignificant problems ]\n";
}


int	main(int ac, char **av)
{
	Harl	instance;
	int		type = 0;
	std::string arr[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	if (ac != 2)
	{
		std::cout << "You must have some type of a problem: <program> <complaint>\n";
		return (0);
	}
	while (type < 4)
	{
		if (av[1] == arr[type])
			break;
		type++;
	}
	switch (type)
	{
		case 0:
			std::cout << "[DEBUG]\n";
			instance.complain("DEBUG");
		case 1:
			std::cout << "[INFO]\n";
			instance.complain("INFO");
		case 2:
			std::cout << "[WARNING]\n";
			instance.complain("WARNING");
		case 3:
			std::cout << "[ERROR]\n";
			instance.complain("ERROR");
			break;
		default:
			instance.complain("COMPLAIN");
	}
}