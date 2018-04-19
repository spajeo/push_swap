
#include "libft.h"
#include "liblst.h"
#include "push_swap.h"

/*
**   returns position of a contained value in the t_lst ref
**          if the values occurs more than once,
**                              the position will be the last occurence
*/

size_t   	ft_getlstlen(t_lst *head)
{
	t_lst		*tmp;
	size_t      len;

	len = 0;
	tmp = head->next;
	while(tmp != head)
	{
		++len;
		tmp = tmp->next;
	}
	return (len);
}
