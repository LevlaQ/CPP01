/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyildiz <gyildiz@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 13:32:47 by gyildiz           #+#    #+#             */
/*   Updated: 2025/09/15 13:54:58 by gyildiz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WordOffice.hpp"

std::string& replace(std::string &sentence, const std::string& str1, const std::string &str2)
{
	size_t	not_found = -1;
	size_t	str1_pos = 0;
	size_t	str1_len;

	if (str1.size() == 0 || str2.size() == 0)
		return (sentence);
	str1_len = str1.size();
	while(str1_pos != not_found)
	{
		str1_pos = sentence.find(str1, 0);
		if (str1_pos != not_found)
		{
			sentence.erase(str1_pos, str1_len);
			sentence.insert(str1_pos, str2);
		}
	}
	return (sentence);
}
