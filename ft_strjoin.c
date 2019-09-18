#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;

	if ((s = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1))) != NULL)
	{
		s = ft_strcpy(s, s1);
		s = ft_strcat(s, s2);
	}
	return (s);
}
