/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l < tjorge-l@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 15:56:24 by tjorge-l          #+#    #+#             */
/*   Updated: 2025/09/08 15:56:25 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AUX_HPP
# define AUX_HPP
#include "Base.hpp"
#include <cstdlib>
#include <iostream>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

enum classInstance
{
	_A,
	_B,
	_C
};

Base	*generate(void);
void	identify(Base *p);
void	identify(Base &p);

#endif