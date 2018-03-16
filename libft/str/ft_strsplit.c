/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spajeo <spajeo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 02:42:44 by spajeo            #+#    #+#             */
/*   Updated: 2016/11/24 20:03:34 by spajeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_fill_in(const char *s, char **str, char c)
{
	int		i;
	int		a;
	int		b;
	int		d;
	int		len;

	a = 0;
	b = 0;
	i = 0;
	d = 0;
	len = ft_strlen(s);
	while (i < len)
	{
		if (!(str[a] = ft_strtrim_c(s + i, c, &d)))
			return ;
		a++;
		i = i + d;
	}
	return ;
}

static int		ft_n_words_without_c(char const *s, char c)
{
	int		prev_is_c;
	int		i;
	int		n_words;

	i = -1;
	n_words = 0;
	prev_is_c = 1;
	while (s[++i])
	{
		if (s[i] != c && prev_is_c)
		{
			prev_is_c = 0;
			n_words++;
		}
		if (s[i] == c)
			prev_is_c = 1;
	}
	return (n_words);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**str;
	size_t	n_words;

	if (!s || !ft_strlen(s))
	{
		str = (char**)malloc(sizeof(char*));
		*str = (!c && s) ? ft_strdup(s) : NULL;
		return (str);
	}
	n_words = ft_n_words_without_c(s, c);
	str = (char **)ft_memalloc(sizeof(*str) * (n_words + 1));
	if (!str)
		return (NULL);
	ft_fill_in(s, str, c);
	str[n_words] = NULL;
	return (str);
}
