#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char *str;

	str = (const unsigned char*)s;
	while (n--)
		if (*str++ == (unsigned char)c)
			return ((void *)--str);
	return (NULL);
}
