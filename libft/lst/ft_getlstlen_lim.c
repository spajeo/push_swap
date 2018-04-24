
#include "libft.h"
#include "liblst.h"
#include "push_swap.h"

/*
**   returns position of a contained value in the t_lst ref
**          if the values occurs more than once,
**                              the position will be the last occurence
*/

size_t   	ft_getlstlen_lim(t_lst *head, int *(*get_int)(t_lst *), int lim)
{
	t_lst		*tmp;
	size_t      len;

	len = 0;
	tmp = head->next;
	if (tmp == head)
		return(0);
	while(tmp != head && *get_int(tmp) != lim)
	{
		++len;
		tmp = tmp->next;
	}
	return (len);
}
