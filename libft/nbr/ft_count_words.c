

#include "libft.h"

size_t		ft_count_word(const char *str,const char c)
{
	size_t n_word;

	n_word = 0;
	while (*str)
	{
		if (*str != c && (*(str + 1) == c || *(str + 1) == '\0'))
			n_word++;
		str++;
	}
	return (n_word);
}
