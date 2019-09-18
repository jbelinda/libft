#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*d;

	if ((d = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1))) != NULL)
	{
		i = 0;
		while (*s)
		{
			d[i] = (*f)(i, *s++);
			i++;
		}
		d[i] = EOS;
	}
	return (d);
}
