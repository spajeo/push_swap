/*
 *	returns the value from a node between 2 nodes at the n and m postion.
 *
 *
 *  	0 - indexing
 *
 */

#include "libft.h"
#include "liblst.h"
#include "push_swap.h"

int   ft_getval_fromrelpos_btwabspos(t_lst *head, size_t start, size_t end,
                                     int*(*get_int)(t_lst *), int rel_pos)

{
	t_lst *tmp;
	t_lst *lstend;
	t_lst *lststart;

	if (start > end)
		return 0;
	if ((size_t)rel_pos >= (end - start))
		return 0;
	if (!(lststart = ft_getlst_fromabspos(head, start)))
	    return 0;
	if (!(lstend = ft_getlst_fromabspos(head, end)))
        return 0;
	if (!lststart || (lststart->next == lststart))
		return (0);
	if (!lstend || (lstend->prev == lstend))
		return (0);
	if (!head || (head->next == head))
		return (0);
	if (!get_int)
		return (0);
	
//	TESTINT("val of abs position P_DATA(lststart)", P_DATA(lststart));
	TESTINT("abs position P_DATA(lststart)", (start));
//	TESTINT("abs pos values      P_DATA(lstend)", P_DATA(lstend));
	TESTINT("abs position P_DATA(lstend)", (end));
	ft_ps_print();
	tmp = ft_getlst_fromrelpos_btwtlst(head, lststart, lstend, (get_int), rel_pos);
	if (tmp == 0)
		return (0);
	int val = *get_int(tmp);
	return(val);
}
