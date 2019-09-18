#include <stdlib.h>
#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*d;
	char	*r;

	if ((d = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1))) != NULL)
	{
		r = d;
		while (*s)
			*r++ = (*f)(*s++);
		*r = EOS;
	}
	return (d);
}
