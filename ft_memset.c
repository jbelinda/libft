#include <stddef.h>

void	*memset(void *dst, int c, size_t len)
{
	char	*p;

	p = (char *)dst;
	while (len--)
		*p++ = (unsigned char)c;
	return (dst);
}
