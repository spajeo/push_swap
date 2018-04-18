
/*
**
** This function allows me to check wether a value an int value
**					is contained in any list
**
** (*get_struct_el) are functions allowing to call any int value
**						from t_lst address
**
*/

#include "liblst.h"

int ft_is_val_in(t_lst *head, int data, int *(*get_struct_el)(t_lst *))
{
	t_lst	*tmp;

	tmp = head->next;
	while (tmp != head)
	{
		if (*get_struct_el(tmp) == data)
		{
			return (1);
		}
		tmp = tmp->next;
	}
	return (0);
}