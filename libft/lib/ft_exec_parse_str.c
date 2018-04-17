

#include "libft.h"

void			ft_exec_parse_str(int *i, char **str, void (*f)(const char *))
{
	if (!i || !*i || !str || !*str || !**str || !f)
		return  ;
	while (*i)
	{
		f(*str);
		++(str);
		--*i;
	}
	return; 
}
