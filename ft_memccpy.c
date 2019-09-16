#include <stddef.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char *to;
	const unsigned char *from;

	to = (unsigned char *)dst;
	from = (const unsigned char *)src;
	while (n--)
		if ((*to++ = *from++) == (unsigned char)c)
			return ((void *)to);
	return (NULL);
}
