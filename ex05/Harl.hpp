/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyildiz <gyildiz@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 13:57:41 by gyildiz           #+#    #+#             */
/*   Updated: 2025/09/15 14:10:11 by gyildiz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

class Harl
{
	private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
	public:
	void complain(std::string level);
	Harl();
	~Harl();
};
