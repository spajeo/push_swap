
#include "libft.h"
#include "liblst.h"
#include "push_swap.h"

/*
** Access space in the struct memory
** t_pile 
**{
**			int data;
** 	====>	int pos;
**			t_lst ptr;
**}
*/


int		*ft_get_tpile_pos(t_lst *ptr)
{
	return (&((t_pile *)((char *)(ptr)
						- ((char *)(&(((t_pile *)0))->lst))))->pos);
}
