#include <stddef.h>

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	unsigned char *to;
	const unsigned char *from;

	to = (unsigned char *)dst;
	from = (const unsigned char *)src;
	while (n--)
		if ((*to++ = *from++) == '\0')
		{
			while (n--)
				*to++ = '\0';
			break;
		}
	return (dst);
}
