/*
**      Takes  2D-strArray and appl
 *
 *  USE CASES : Parse
*/




#include "libft.h"

void			ft_exec_parse_str(char **str, void (*f)(const char *))
{
	int i;
	
	i = 0;
	if (!str || !*str || !f)
	{
		return ;
	}
	while (*(str + i))
	{
//		if (!ft_isspace(*(str + i)) && (i == 0 || ft_isspace(*(str + i - 1))))
		f((const char *)str + i);
		++(i);
	}
	return;
}
