
#include "libft.h"

int ft_ps_atoi_exit(const char *src)
{
	ssize_t			tmp;
	int			 	sign;

	sign = 1;
	tmp = 0;
	while (ft_isspace((int)*src))
		++src;
	if (*src == '-')
		sign = -1;
	if (ft_issign(*src))
		++src;
	if (!ft_isdigit(*src))
		EXIT_FAIL("Error : not a digit");
	while (ft_isdigit(*src))
	{
		tmp = TIME_10(tmp) + *src - '0';
		++src;
	}
	tmp = tmp * sign;
	if (tmp < INT_MIN || INT_MAX < tmp)
		EXIT_FAIL("Error : not an int value");
	return ((int)tmp);
}
