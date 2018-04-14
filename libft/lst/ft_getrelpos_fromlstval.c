
#include "libft.h"
#include "liblst.h"
#include "push_swap.h"

/*
**   returns position of a contained value in the t_lst ref
**          if the values occurs more than once,
**                              the position will be the last occurence
*/

int	ft_getrelpos_fromlstval(t_lst *head, int *(* get_int)(t_lst *), t_lst *ref)
{
	t_lst		*tmp;
	int		    ref_val;
	size_t      position;

	position = 0;
	ref_val = *get_int(ref);
	TESTINT("ref_val from get_getrelpos_fromlstval", ref_val);
	tmp = head->next;
	while(tmp != head)
	{
		if (*get_int(tmp) <= ref_val)
		{
			++position;
		}
		tmp = tmp->next;
	}
	return (position);
}
