#include <stdlib.h>
#include "libft.h"

static unsigned	word_count(const char *s, char c)
{
	unsigned	n;

	n = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			n++;
		while (*s && *s != c)
			s++;
	}
	return (n);
}

char	**ft_strsplit(char const *s, char c)
{
	unsigned	i;
	const char	*e;
	char		**table;

	if ((i = word_count(s, c)) == 0)
		return (NULL);
	if ((table = (char **)ft_memalloc(sizeof(char *) * (i + 1))) != NULL)
	{
		i = 0;
		e = s;
		while (*e)
		{
			while (*e == c)
				e++;
			s = e;
			while (*e && *e != c)
				e++;
			if (e > s)
				if ((table[i++] = ft_strndup(s, e - s)) == NULL)
				{
					ft_memrelease((void **)table);
					return (NULL);
				}
		}
	}
	return (table);
}
