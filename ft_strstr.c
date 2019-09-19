/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelinda <jbelinda@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 22:10:32 by jbelinda          #+#    #+#             */
/*   Updated: 2019/09/19 19:18:33 by jbelinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	char	*s;
	size_t	nlen;

	if (!(nlen = ft_strlen(needle)))
		return ((char *)haystack);
	while ((s = ft_strchr(haystack, *needle)) != NULL)
		if (ft_strncmp(s, needle, nlen) == 0)
			return (s);
		else
			haystack = s + 1;
	return (NULL);
}
