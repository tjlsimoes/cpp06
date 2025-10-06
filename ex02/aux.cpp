/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l < tjorge-l@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 15:56:23 by tjorge-l          #+#    #+#             */
/*   Updated: 2025/10/06 16:53:57 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "aux.hpp"

Base	*generate(void)
{
	Base	*newInstance;
	int		i;

	srand(time(NULL));
	i = rand() % 3;
	switch (i)
	{
	case 0:
		newInstance = new A();
		break ;
	case 1:
		newInstance = new B();
		break ;
	case 2:
		newInstance = new C();
		break ;
	default:
		return (NULL);
		break ;
	}
	return (newInstance);
}

void	identify(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void	identify(Base &p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		return ;
	}
	catch (...)
	{}
	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		return ;
	}
	catch (...)
	{}
	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		return ;

	}
	catch (...)
	{}
}

