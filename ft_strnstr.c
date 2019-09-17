/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelinda <jbelinda@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 00:09:37 by jbelinda          #+#    #+#             */
/*   Updated: 2019/09/18 01:58:19 by jbelinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		nlen;
	char		*s;
	const char	*sub;

	if (!(nlen = ft_strlen(needle)))
		return ((char *)haystack);
	sub = haystack;
	while ((s = ft_strchr(sub, *needle)) != NULL)
		if (((s - haystack) < (long)len) &&
			(ft_strlen(s) >= nlen) &&
			(ft_strncmp(s, needle, nlen)) == 0)
			return (s);
		else
			sub = s + 1;
	return (NULL);
}
