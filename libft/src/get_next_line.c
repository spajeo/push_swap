/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/16 15:01:51 by spajeo            #+#    #+#             */
/*   Updated: 2017/11/23 17:01:02 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

#define	LAST		0	
#define READING		1
int				get_next_line(const int fd, char **line)
{
	static t_gnl node;

	if (fd < 0 || !line  || !(*line = ft_strnew(0)))
		return (-1);
	while (42)
	{
		if (GN_RET <= 0 && !(GN_START = 0) &&
				((GN_RET = read(fd, GN_BUFF, GN_BUFF_SIZE)) < 0))
			return (-1);
		if (!GN_RET && **line)
			return (1);
		if (!GN_RET)
			return (0);
		GN_LEN = ft_strlen_c_len(&GN_BUFF[GN_START], EOL, GN_RET);
		*line = ft_strjoin_free(*line,
				ft_memcpy(ft_strnew(GN_LEN), &GN_BUFF[GN_START], GN_LEN));
		if ((GN_RET -= GN_LEN) && ((GN_BUFF[GN_START += GN_LEN] == EOL) || !GN_LEN))
		{
			GN_RET--;
			GN_START++;
			return (1);
		}
	}
}
