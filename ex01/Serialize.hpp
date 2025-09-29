/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 15:57:05 by tjorge-l          #+#    #+#             */
/*   Updated: 2025/09/29 11:53:15 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZE_HPP
# define SERIALIZE_HPP
#include <stdint.h>
#include <string>

struct Data
{
	std::string	name;
	int			idx;
};

class Serialize
{
	private:
		Serialize();
		Serialize	&operator=(const Serialize &other);				// Assignment Operator
		Serialize(const Serialize &other);							// Copy Constructor
		~Serialize();
	public:
		static uintptr_t	serialize(Data *ptr);
		static Data			*deserialize(uintptr_t raw);
};

#endif