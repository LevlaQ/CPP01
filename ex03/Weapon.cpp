/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyildiz <gyildiz@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 17:25:15 by gyildiz           #+#    #+#             */
/*   Updated: 2025/09/06 18:25:57 by gyildiz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{}

Weapon::~Weapon()
{}

Weapon::Weapon(std::string type)
{
	this->type = type;
}

void	Weapon::setType(const	std::string &str)
{
	this->type = str;
}

const std::string	&Weapon::getType(void) const
{
	return (this->type);
}