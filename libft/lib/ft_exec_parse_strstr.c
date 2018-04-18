/*
**      Takes  2D-strArray and appl
 *
 *  	Parse each second dimension and execute a transformation
 *		USE CASES : parsing in `push swap`
*/




#include "libft.h"

void			ft_exec_parse_strstr(char **str, void (*f)(const char *))
{

	if (!str || !*str || !**str || !f)
	{
		return ;
	}
	while (*(str))
	{
		f(*(const char **)str);
		++(str);
	}
	return;
}
