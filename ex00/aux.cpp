/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 12:04:54 by tjorge-l          #+#    #+#             */
/*   Updated: 2025/10/06 10:04:54 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void	char_conversion(std::string nbr_str)
{
	// std::cout << "Char conversion" << std::endl; ///
	std::cout
	<<	"int: " << static_cast<int>(nbr_str[0]) << "\n"
	<< "float: " << static_cast<float>(nbr_str[0]) << ".0f\n"
	<< "double: " << static_cast<double>(nbr_str[0]) << ".0"
	<< std::endl;
}

void	int_conversion(std::string nbr_str)
{
	int	nbr;
	nbr = atoi(nbr_str.c_str());

	// std::cout << "Int conversion" << std::endl; ///

	if (nbr <= 31 || nbr == 127)
		std::cout << "char: " << "Non displayable" << "\n";
	else if (nbr > 127)
		std::cout << "char: " << "impossible" << "\n";
	else
		std::cout << "char: '" << static_cast<unsigned char>(nbr) << "'\n";

	std::cout << "int: " << nbr << "\n";

	std::cout
	<< "float: " << std::fixed << std::setprecision(1) << static_cast<float>(nbr) << "f\n"
	<< "double: " << std::fixed << std::setprecision(1) << static_cast<double>(nbr)
	<< std::endl;
}

void	float_conversion(std::string nbr_str)
{
	float	nbr;

	// std::cout << "Float conversion" << std::endl; ///

	nbr = atof(nbr_str.c_str());
	if (nbr <= 31.0 || nbr == 127.0)
		std::cout << "char: " << "Non displayable" << "\n";
	else if (nbr > 127.0  || nbr_str == "-inff" || nbr_str == "+inff" 
		|| nbr_str == "nanf")
		std::cout << "char: " << "impossible" << "\n";
	else
		std::cout << "char: '" << static_cast<unsigned char>(nbr) << "'\n";
	
	if (nbr <= std::numeric_limits<int>::min() || nbr_str == "-inff")
		std::cout << "int: " << "underflow" << "\n";
	else if (nbr >= std::numeric_limits<int>::max() || nbr_str == "+inff")
		std::cout << "int: " << "overflow" << "\n";
	else if (nbr_str == "nanf")
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(nbr) << "\n";

	std::cout << "float: " << nbr_str << "\n";

	if (nbr_str == "-inff")
		std::cout << "double: " << "-inf" << "\n";
	else if (nbr_str == "+inff")
		std::cout << "double: " << "+inf" << "\n";
	else if (nbr_str == "nanf")
		std::cout << "double: nan" << std::endl;
	else
		std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(nbr) << "\n";
}

void	double_conversion(std::string nbr_str)
{
	long double	nbr;

	// std::cout << "Double conversion" << std::endl; ///

	nbr = strtold(nbr_str.c_str(), NULL);
	if (nbr <= 31 || nbr == 127)
		std::cout << "char: " << "Non displayable" << "\n";
	else if (nbr > 127 || nbr_str == "-inff" || nbr_str == "+inff" 
		|| nbr_str == "nan")
		std::cout << "char: " << "impossible" << "\n";
	else
		std::cout << "char: '" << static_cast<unsigned char>(nbr) << "'\n";
	
	if (nbr <= std::numeric_limits<int>::min() || nbr_str == "-inff")
		std::cout << "int: " << "underflow" << "\n";
	else if (nbr >= std::numeric_limits<int>::max() || nbr_str == "+inff")
		std::cout << "int: " << "overflow" << "\n";
	else if (nbr_str == "nanf" || nbr_str == "nan")
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(nbr) << "\n";

	if (nbr_str == "-inf")
		std::cout << "float: -inff" << "\n";
	else if (nbr <= std::numeric_limits<float>::min())
		std::cout << "float: " << "underflow" << "\n";
	else if (nbr_str == "+inf")
		std::cout << "float: +inff" << "\n";
	else if (nbr >= std::numeric_limits<float>::max())
		std::cout << "float: " << "overflow" << "\n";
	else if (nbr_str == "nan")
		std::cout << "float: nanf" << "\n";
	else
		std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(nbr) << "\n";

	if (nbr_str == "-inf")
		std::cout << "double: -inf" << "\n";
	else if (nbr <= std::numeric_limits<double>::min())
		std::cout << "double: " << "underflow" << "\n";
	else if (nbr_str == "+inf")
		std::cout << "double: +inf" << "\n";
	else if (nbr >= std::numeric_limits<double>::max())
		std::cout << "double: " << "overflow" << "\n";
	else if (nbr_str == "nan")
		std::cout << "double: nan" << "\n";
	else
		std::cout << "double: " << std::fixed << std::setprecision(1) << nbr << "\n";
}