/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 01:40:54 by spajeo            #+#    #+#             */
/*   Updated: 2016/11/23 00:46:51 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "liblst.h"

t_lst		*ft_lstnew(void const *data_content, size_t data_content_size)
{
	void	*new_content;
	t_lst	*new;

	if (!(new = (t_lst *)malloc(sizeof(t_lst))))
		return (NULL);
	if (!(new_content = ft_memalloc(data_content_size)))
		return (NULL);
	if (data_content == NULL)
	{
		new->content = NULL;
		new->content_size = 0;
	}
	else
	{
		if (!(new->content = malloc(sizeof(new_content)))
				&& ft_free((void *)new))
			return (NULL);
		new->content = ft_memcpy(new_content, data_content, data_content_size);
		new->content_size = data_content_size;
		new->next = NULL;
	}
	return (new);
}
