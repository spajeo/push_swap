
#include "liblst.h"

/*
**       CHECK IF
 *          (LST)ABS_POS  <==> (LST->INT)REL_POS
*/



int     ft_is_abspos_is_relpos(t_lst *head, int*(*get_int)(t_lst *), t_lst *ref)
{
	if (ft_getabspos_fromlst(head, ref) == ft_getrelpos_fromlstval(head, &(*get_int), ref))
	{
		return (1);
	}
	return (0);
}
