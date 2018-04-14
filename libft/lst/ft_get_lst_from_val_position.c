


/*
**
**
** OBTAINS THE NTH VALUE REGARDING THE VALUE NOT THE POSITION
**
** returns the **ADDRESS** of the value
**
**
**
**
*/


#include "libft.h"
#include "liblst.h"
#include "push_swap.h"

int	*ft_get_lst_from_val_position(t_lst *head, int*(*get_int)(t_lst *), size_t position)
{
	t_lst		*tmp;
	t_lst		*comp;
	size_t      inferior;

	inferior = 0;
	tmp = head->next;
	comp = head->next;
	while (tmp != head)
	{
		while (comp != head)
		{
			if (*get_int(comp) < *get_int(tmp))
			{
				++inferior;
			}
			comp = comp->next;
		}
		if (inferior == position)
		{
			return (get_int(tmp));
		}
		inferior = 0;
		comp = head->next;
		tmp = tmp->next;
	}
	return (0);
}

