/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <spajeo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 23:58:40 by spajeo            #+#    #+#             */
/*   Updated: 2017/04/23 16:31:29 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen_int(int *s)
{
	int len;

	len = -1;
	while (s[++len])
		;
	return (len);
}
