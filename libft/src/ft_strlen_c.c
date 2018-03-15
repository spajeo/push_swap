/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_c.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <spajeo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 18:17:48 by spajeo            #+#    #+#             */
/*   Updated: 2017/04/20 17:01:50 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen_c(const char *str, char a)
{
	int len;

	len = 0;
	while (str[len] && str[len] != a)
		len++;
	return (len);
}
