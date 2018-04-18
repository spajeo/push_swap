
#include "libft.h"
#include "libft.h"
#include "liblst.h"
#include "push_swap.h"

void			ft_exec_parse_ac(int *i, char **str, void (*f)(const char *))
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
