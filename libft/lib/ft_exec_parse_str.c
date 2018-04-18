/*
**      Takes  1D-strArray and apply a function to each given value separated
**      by spaces
**
**      USE CASES :
**        push_swap: Parse `argv` when variables are all given in a unique dimension.
*/




#include "libft.h"

void			ft_exec_parse_str(char *str, void (*f)(const char *))
{
	char *init;
	
	init = str;
	if (!str || !*str || !f)
	{
		return ;
	}
	while (*(str))
	{
		if (!ft_isspace(*str) && (init == str || ft_isspace(*(str - 1))))
			f((const char *)str );
		++str;
	}
	return;
}
