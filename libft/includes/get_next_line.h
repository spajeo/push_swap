/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Scarlett <Scarlett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/16 17:20:33 by spajeo            #+#    #+#             */
/*   Updated: 2017/09/14 00:02:12 by Scarlett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "libft.h"
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>

# define GN_BUFF_SIZE 512
# define EOL '\n'

int					get_next_line (const int fd, char **line);

typedef struct		s_titi
{
	char			buff[GN_BUFF_SIZE];
	int				ret;
	int				start;
	int				len;
}					t_gnl;

# define GN_BUFF	node.buff
# define GN_START	node.start
# define GN_LEN		node.len
# define GN_RET		node.ret

#endif
