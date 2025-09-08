#include "ScalarConverter.hpp"

static bool	pseudo_float(std::string nbr_str)
{
	if (nbr_str == "nanf" || nbr_str == "-inff" || nbr_str == "+inff")
		return (true);
	return (false);
}

static bool	pseudo_double(std::string nbr_str)
{
	if (nbr_str == "nan" || nbr_str == "-inf" || nbr_str == "+inf")
		return (true);
	return (false);
}

static int	ft_isspace(char c)
{
	if (c == ' ' || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

static bool	is_nbr(const char *nptr)
{
	while (ft_isspace(*nptr))
		nptr++;
	if (*nptr == '-')
		nptr++;
	else if (*nptr == '+')
		nptr++;
	if (*nptr >= '0' && *nptr <= '9')
		return (true);
	return (false);
}


ScalarConverter::ScalarConverter()
{}
ScalarConverter::~ScalarConverter()
{}

void	ScalarConverter::convert(std::string nbr_str)
{
	size_t	str_len;

	str_len = nbr_str.length();
	if (str_len == 1 &&  !(nbr_str[0] >= 48 && nbr_str[0] <= 57))
		char_conversion(nbr_str);
	else if ((nbr_str.find('.') != std::string::npos && nbr_str[str_len - 1] == 'f') ||
			pseudo_float(nbr_str))
		float_conversion(nbr_str);
	else if (nbr_str.find('.') != std::string::npos ||
			pseudo_double(nbr_str))
		double_conversion(nbr_str);
	else if (is_nbr(nbr_str.c_str()))
		int_conversion(nbr_str);
	else
		std::cerr << "Invalid user input" << std::endl;
}