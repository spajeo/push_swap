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

int   ft_getval_fromrelpos_btwabspos(t_lst *head, size_t start, size_t end,
                                     int*(*get_int)(t_lst *), int rel_pos)

{
	t_lst *tmp;
	t_lst *lstend;
	t_lst *lststart;
	// securite pour verifier pas de head in btw avec les abspositions;
	if (start > end)
		return 0;
	lststart = ft_getlst_fromabspos(head, start);
	lstend = ft_getlst_fromabspos(head, end);
	if (!lststart || (lststart->next == lststart))
		return (0);
	if (!lstend || (lstend->prev == lstend))
		return (0);
	if (!head || (head->next == head))
		return (0);
	if (!lststart || (lststart->next == lststart))
		return (0);
	if (!lstend || (lstend->prev == lstend))
		return (0);
	if (!get_int)
		return (0);

	tmp = ft_getlst_fromrelpos_btwtlst(head, lststart, lstend, (get_int), rel_pos);
	if (tmp == 0)
		return (0);
	int val = *get_int(tmp);
	return(val);
}
