/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyildiz <gyildiz@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 16:05:31 by gyildiz           #+#    #+#             */
/*   Updated: 2025/09/06 16:19:06 by gyildiz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Zombie
{
	private:
	std::string name;
	public:
	void	announce(void);
	void	setName(std::string zname);
	Zombie();
	~Zombie();
};

Zombie*	zombieHorde(int N, std::string name);