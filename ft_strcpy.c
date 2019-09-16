#include <limits.h>
#include <stddef.h>
#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	unsigned char *to;

	to = ft_memccpy((void *)dst, (const void *)src, (int)'\0', SIZE_T_MAX);
	return (dst);
}
