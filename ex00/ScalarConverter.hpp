/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 12:04:47 by tjorge-l          #+#    #+#             */
/*   Updated: 2025/10/06 09:46:40 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_CONVERTER_HPP
# define SCALAR_CONVERTER_HPP
#include <string>
#include <iostream>
#include <stdlib.h>
#include <limits>
#include <iomanip>
class ScalarConverter
{
	private:
		ScalarConverter();
		ScalarConverter	&operator=(const ScalarConverter &other);				// Assignment Operator
		ScalarConverter(const ScalarConverter &other);							// Copy Constructor
		~ScalarConverter();
	public:
		static	void convert(std::string nbr_str);

};

void	char_conversion(std::string nbr_str);
void	int_conversion(std::string nbr_str);
void	float_conversion(std::string nbr_str);
void	double_conversion(std::string nbr_str);


#endif