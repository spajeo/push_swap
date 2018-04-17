


#include <liblst.h>

int     ft_arerelpos_next(t_lst *first, int *(* get_fint)(t_lst *),
                          t_lst *second, int *(* get_sint)(t_lst *))
{
	
	if (*get_fint(first) <= *get_sint(second))
		return(1);
	return (0);
}