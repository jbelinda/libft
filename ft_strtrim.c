/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelinda <jbelinda@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 01:26:38 by jbelinda          #+#    #+#             */
/*   Updated: 2019/09/19 19:18:48 by jbelinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s)
{
	char		*r;
	size_t		n;

	while (ft_isspace(*s))
		s++;
	if (*s == EOS)
		return ((char *)ft_memalloc(1));
	r = (char *)s + ft_strlen(s);
	while (ft_isspace(*--r))
		;
	n = r - s + 1;
	if ((r = (char *)malloc(sizeof(char) * (n + 1))) != NULL)
	{
		r = ft_strncpy(r, s, n);
		r[n] = EOS;
	}
	return (r);
}
