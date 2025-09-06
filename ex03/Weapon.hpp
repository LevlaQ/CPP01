/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyildiz <gyildiz@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 17:25:19 by gyildiz           #+#    #+#             */
/*   Updated: 2025/09/06 18:42:29 by gyildiz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Weapon
{
	private:
	std::string	type;
	public:
	void				setType(const std::string &str);
	const std::string	&getType(void) const;
	Weapon(std::string type);
	Weapon();
	~Weapon();
};