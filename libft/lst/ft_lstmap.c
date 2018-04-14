/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 13:55:42 by spajeo            #+#    #+#             */
/*   Updated: 2016/11/21 17:19:36 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "liblst.h"

t_lst	*ft_lstmap(t_lst *lst, t_lst *(*f)(t_lst *elem))
{
	t_lst	*new_list;

	new_list = NULL;
	if (lst && f)
	{
		new_list = f(lst);
		if (lst->next)
			new_list->next = ft_lstmap(lst->next, f);
	}
	return (new_list);
}
