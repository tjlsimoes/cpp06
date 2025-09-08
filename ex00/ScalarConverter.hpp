#ifndef SCALAR_CONVERTER_HPP
# define SCALAR_CONVERTER
#include <string>
#include <iostream>
#include <stdlib.h>
#include <limits>
#include <iomanip>
class ScalarConverter
{
	public:
		static	void convert(std::string nbr_str);	
};

void	char_conversion(std::string nbr_str);
void	int_conversion(std::string nbr_str);
void	float_conversion(std::string nbr_str);
void	double_conversion(std::string nbr_str);


#endif