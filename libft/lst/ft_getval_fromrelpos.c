

#include "libft.h"
#include "liblst.h"
#include "push_swap.h"

/*
 *                  IF INIT IS NULL => smaller_element is ignored
 */

static t_lst       *ft_get_smallerval(t_lst *head, int *(*get_int)(t_lst), int min_elem, int init)
{
	t_lst		*tmp;
	t_lst		*ret;
	
	if (!head || head->next == head)
		return (0);
	tmp = head->next;
	ret = head->next;
	while (init != 0 && ret != head)
	{
		if (*get_int(ret) > min_elem)
			break;
		ret = ret->next;
	}
	while (tmp != head)
	{
		if ((init == 0 || *get_int(tmp) > min_elem) && *get_int(tmp) < *get_int(ret))
			ret = tmp;
		tmp = tmp->next;
	}
	return (ret);
}

/*
 *     Return the absolute position of the struct
 *     from a given variable
 *     0 - indexing
 *
 *     // fuck the idiotic norm that doesn t let me use 'DO WIHLE'
 */

#include "libft.h"
#include "liblst.h"
#include "push_swap.h"

t_lst   *ft_getlst_fromrelpos(t_lst *head, int*(*get_int)(t_lst *),
                                                    size_t rel_pos)
{
	int         min_val;
	t_lst       *tmp;

	min_val = 0;
	tmp = ft_get_smallerval(head, &(*get_int), min_val,0);
	while (rel_pos > 0)
	{
		min_val = get_int(tmp);
		tmp = ft_get_smallerval(head, &(*get_int), min_val,0);
		--rel_pos;
	}
	return (tmp);
}
