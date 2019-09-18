#include <stdlib.h>
#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*d;

	if ((d = (char *)malloc(sizeof(char) * (len + 1))) != NULL)
	{
		d[len] = EOS;
		while (len--)
			d[len] = s[start + len];
	}
	return (d);
}
