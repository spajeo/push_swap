
#include "libft.h"
#include "ft_printf.h"
#include "push_swap.h"
#include "liblst.h"
/*
**
** /!\ This is not a modular function.
 * Works on list made of t_str nodes.
**
**
**
*/

void	ft_print_next_tstr_str(t_lst *head)
{
	t_lst *tmp;
	tmp = head->next;

	while (tmp != head)
	{
		ft_printf("%s\n",T_STR(tmp)->str);
		tmp = tmp->next;
	}
    return ;
}
