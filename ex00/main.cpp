/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyildiz <gyildiz@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 14:04:38 by gyildiz           #+#    #+#             */
/*   Updated: 2025/09/06 14:52:43 by gyildiz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *fresh;
	
	randomChump("RandomMe");
	fresh = newZombie("NewChuck");
	fresh->announce();
	delete fresh;
}