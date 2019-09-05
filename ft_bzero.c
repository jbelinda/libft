#include <stddef.h>
#include "libft.h"

void	bzero(void *dst, size_t len)
{
	dst = ft_memset(dst, 0, len);
}
