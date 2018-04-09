
#include "libft.h"
#include "libft.h"
#include "liblst.h"
#include "push_swap.h"

void			ft_exec_parse_ps(char *str, void (*f)(const char *))
{
	int i;

	i = 0;
	if (!str || !*str || !f)
	{
		return ;
	}
	while (*(str + i))
	{
		if (!ft_isspace(*(str + i)) && (i == 0 || ft_isspace(*(str + i - 1))))
			f((const char *)str + i);
		++(i);
	}
	return; 
}
