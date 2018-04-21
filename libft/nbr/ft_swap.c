#include "libft.h"
#include "push_swap.h"

void     ft_swap(ssize_t *a, ssize_t *b)
{
    ssize_t     c;
	
    c  = *a;
    *a = *b;
    *b = c;
}