
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

	len =  ft_getlstlen(head) / 2;
//	t_lst *tmp = *ft_getlst_fromrelpos(*head, get_int, len);
	return (ft_getlst_fromrelpos(head, get_int, len)); // A TESTER
}
