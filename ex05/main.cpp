/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyildiz <gyildiz@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 14:09:01 by gyildiz           #+#    #+#             */
/*   Updated: 2025/09/15 14:45:57 by gyildiz          ###   ########.fr       */
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
		std::cout << "Wdym??\n";
}


int	main(void)
{
	Harl instance;
	
	instance.complain("DEBUG");
	instance.complain("INFO");
	instance.complain("WARNING");
	instance.complain("ERROR");
	instance.complain("HAHA");
}