/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyildiz <gyildiz@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 17:24:58 by gyildiz           #+#    #+#             */
/*   Updated: 2025/09/06 18:54:32 by gyildiz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"

class HumanB
{
	private:
	std::string	name;
	Weapon		*weapon;
	public:
	void	attack(void);
	void	setWeapon(Weapon &weapon);
	HumanB(std::string name);
	~HumanB();
};
