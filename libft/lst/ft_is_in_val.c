#include "liblst.h"

int			ft_is_in_val(t_data *ref)
{
//	t_data 	*comp;
	(void)ref->lst;

/*
//	(void *)comp = (void *)0;
if (&ref->lst != ref->lst.next && &ref->lst != ref->lst.prev)
	{
		comp = T_DATA(ref->lst.next);
		while (&comp->lst != &ref->lst)
		{
			if (ref->data == T_DATA(&comp->lst)->data)//CONTAINEROF(&comp->lst, t_data, lst)->data)// #Define T_DATA(it) CONTAINEROF(it, t_data, lst)
				return(1); // peut on retourner la valeur int de l adress de data en double ?
			comp = T_DATA(comp->lst.next);
		}
	}
	*/
	return(0);
}