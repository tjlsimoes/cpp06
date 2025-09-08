/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l < tjorge-l@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 15:57:09 by tjorge-l          #+#    #+#             */
/*   Updated: 2025/09/08 15:57:10 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"
#include <iostream>

int	main(void)
{
	Data	*dt_ptr = new Data;
	Data *new_ptr;

	dt_ptr->idx = 1;
	dt_ptr->name = "Hello";

	new_ptr = Serialize::deserialize(Serialize::serialize(dt_ptr));

	std::cout << new_ptr << std::endl;
	std::cout << dt_ptr << std::endl;

	delete dt_ptr;
	return (0);
}