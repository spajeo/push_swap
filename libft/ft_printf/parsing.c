/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <spajeo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/23 18:30:31 by spajeo            #+#    #+#             */
/*   Updated: 2017/06/30 15:38:39 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_padding(const char *c)
{
	int		i;
	char	str[2048];

	str[0] = 0;
	i = -1;
	if (!(FLAG & FLAG_PAD))
	{
		FLAG |= FLAG_PAD;
		while (ft_isdigit(c[++i]))
			ft_strncat(str, c + i, 1);
		if (i >= -1)
		{
			PAD = ft_atoi(str);
			return (--i);
		}
	}
	return (0);
}

int	ft_precision(const char *c)
{
	int		i;
	char	str[2048];

	str[0] = 0;
	i = 0;
	if (!(FLAG & FLAG_PREC))
	{
		PREC = 0;
		FLAG |= FLAG_PREC;
		while (ft_isdigit(c[++i]))
			ft_strncat(str, c + i, 1);
		if (i >= -1)
		{
			PREC = ft_atoi(str);
			return (--i);
		}
	}
	return (0);
}

int	ft_fin_conv(void)
{
	if (FLAG & FLAG_PREF || FLAG & FLAG_P)
	{
		if (FLAG & FLAG_MX)
			ft_strcat(PREF, "0X");
		else if (FLAG & FLAG_X || FLAG & FLAG_P)
			ft_strcat(PREF, "0x");
		else if (FLAG & FLAG_O || FLAG & FLAG_MO)
			ft_strcat(PREF, "0");
		else if (FLAG & FLAG_B)
			ft_strcat(PREF, "0b");
		else if (FLAG & FLAG_MB)
			ft_strcat(PREF, "0B");
	}
	if (FLAG & FLAG_XMXP)
		BASE = 16;
	else if (FLAG & FLAG_OMO)
		BASE = 8;
	else if (FLAG & FLAG_BMB)
		BASE = 2;
	return (0);
}
