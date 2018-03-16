
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


void    ft_lst_move_node_after(t_lst *src, t_lst *dst)
{
    ft_lst_disconnect(src);
    ft_lst_add_after(src, dst);
}

