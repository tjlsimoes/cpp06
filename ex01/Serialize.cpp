/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 15:57:02 by tjorge-l          #+#    #+#             */
/*   Updated: 2025/09/29 11:53:39 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

uintptr_t	Serialize::serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Serialize	&Serialize::operator=(const Serialize &other)
{
	(void)&other;
	return (*this);
}

Serialize::Serialize(const Serialize &other)
{
	(void)&other;
}

Data		*Serialize::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}