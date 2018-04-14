
#include "liblst.h"
/*
**
** Separates a node and Adds it AFTER the given node in its list
** If same list is 2nd parameter moves it within its list
**
** 1st parameter : node to isolate and move
** 2nd parameter : the list's node
**
*/


void    ft_lstmv_after(t_lst *src, t_lst *dst)
{
    ft_lstdisconnect(src);
    ft_lstinsert_after(src, dst);
}

