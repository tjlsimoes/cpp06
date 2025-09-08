/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l < tjorge-l@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 15:56:05 by tjorge-l          #+#    #+#             */
/*   Updated: 2025/09/08 15:56:46 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_CPP
# define MAIN_CPP
#include "aux.hpp"


int	main(void)
{
	Base	*ptr;

	ptr = generate();
	if (ptr)
	{
		identify(ptr);
		identify(*ptr);
	}
	delete ptr;
	return (0);
}

#endif