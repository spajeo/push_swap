
#include "libft.h"
#include "liblst.h"
#include "push_swap.h"

/*
**
**      Returns t_lst for the median value on the list
**
*/

t_lst   	*ft_getlstmedian(t_lst *head, int *(* get_int)(t_lst *))
{
	size_t      len;

	len =  ft_getlstlen(head);
	len  = len/2 - (len%2);
	
	return (ft_getlst_fromrelpos(head, get_int, len));
}
