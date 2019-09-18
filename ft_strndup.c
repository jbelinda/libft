#include <stdlib.h>
#include "libft.h"

char	*ft_strndup(const char *s, size_t n)
{
	size_t	len;
	char	*dup;

	len = ft_strlen(s);
	len = (len < n ? len : n);
	if ((dup = (char *)malloc(sizeof(char) *(len + 1))) != NULL)
	{
		ft_memcpy((void *)dup, (const void *)s, len);
		dup[len] = EOS;
	}
	return (dup);
}
