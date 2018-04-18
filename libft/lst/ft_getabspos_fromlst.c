
#include "libft.h"
#include "liblst.h"
#include "push_swap.h"

/*
 *   ZERO indexing
**
*/

int	ft_getabspos_fromlst(t_lst *head, t_lst *ref)
{
	int count = -1;
	t_lst *tmp;
	
	tmp = head->next;
	while (ref != head)
	{
		++count;
		if (tmp == ref)
		{
//			TESTINT("ABSOLUTE POSITION FROM LST", count);
			return (count);
		}
		tmp = tmp->next;
	}
	return (-1);
}
