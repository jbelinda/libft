#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char		*r;
	size_t		n;

	while (ft_isspace(*s))
		s++;
	r = (char *)s + ft_strlen(s);
	while (ft_isspace(*--r))
		;
	n = r - s + 1;
	if ((r = (char *)malloc(sizeof(char) * (n + 1))) != NULL)
		r = ft_strncpy(r, s, n);
	return (r);
}
