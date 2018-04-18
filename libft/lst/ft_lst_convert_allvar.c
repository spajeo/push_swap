
/*
** Sets all the values in a list to the same variable
**
*/

#include "libft.h"
#include "liblst.h"
#include "push_swap.h"

void		ft_lst_convert_allvar(t_lst *head, int *(* get_int)(t_lst *), int var)
{
	t_lst *tmp;

	tmp = head->next;
	while (tmp != head)
	{
		*get_int(tmp) = var;
		tmp= tmp->next;
	}
}
