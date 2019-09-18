#include <stdlib.h>

/*
** Releases dynamically allocated NULL-terminated array of pinters
*/

void	ft_memrelease(void **a)
{
	unsigned	i;

	i = 0;
	while (a[i])
		free(a[i++]);
	free(a);
}
