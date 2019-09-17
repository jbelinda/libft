#include <stddef.h>

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char *to;

	if (n)
	{
		to = s1;
		while (*to)
			to++;
		while (n--)
			if ((*to = *s2++) != '\0')
				to++;
			else
				break;
		*to = '\0';
	}
	return (s1);
}
