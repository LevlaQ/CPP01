/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyildiz <gyildiz@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 16:34:19 by gyildiz           #+#    #+#             */
/*   Updated: 2025/09/06 17:15:27 by gyildiz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;
	
	std::cout << std::setw(36) <<"Memory adress of string variable: " << &str << std::endl;
	std::cout << std::setw(36) <<"Memory adress held by stringPTR: " << stringPTR << std::endl;
	std::cout << std::setw(36) <<"Memory adress held by stringREF: " << &stringREF << std::endl;
	std::cout << std::setw(36) <<"The value of the string variable: " << str << std::endl;
	std::cout << std::setw(36) <<"The value pointed to by stringPTR: " << *stringPTR << std::endl;
	std::cout << std::setw(36) <<"The value pointed to by stringREF: " << stringREF << std::endl;
}