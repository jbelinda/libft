#include <stdlib.h>
#include <stddef.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*dup;

	len = ft_strlen(s1) + 1;
	if ((dup = (char *)malloc(len)) != NULL)
		ft_memcpy((void *)dup, (const void *)s1, len);
	return (dup);
}
