#include <stddef.h>

size_t	ft_strlen(const char *s)
{
	const char *p;

	p = s;
	while (*p++)
		;
	return ((size_t)((unsigned long)p - (unsigned long)s - 1));
}
