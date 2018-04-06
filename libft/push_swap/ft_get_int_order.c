

#include "../libft/includes/libft.h"
#include "../libft/includes/liblst.h"
#include "../includes/push_swap.h"

int	*ft_get_int_order(t_lst *head, int*(*get_int)(t_lst *), size_t position)
{
	t_lst		*tmp;
	t_lst		*test;
	size_t      inferior;

	inferior = 0;
	tmp = head->next;
	test = head->next;
	while (tmp != head)
	{
		while (test != head)
		{
			if (*get_int(test) < *get_int(tmp))
			{
				++inferior;
			}
			test = test->next;
		}
		if (inferior == position)
		{
			return (get_int(tmp));
		}
		inferior = 0;
		test = head->next;
		tmp = tmp->next;
	}
	return (0);
}

