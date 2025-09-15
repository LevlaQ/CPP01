/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyildiz <gyildiz@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 14:48:30 by gyildiz           #+#    #+#             */
/*   Updated: 2025/09/15 14:48:36 by gyildiz          ###   ########.fr       */
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