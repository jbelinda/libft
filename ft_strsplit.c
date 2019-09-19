/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelinda <jbelinda@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 01:26:12 by jbelinda          #+#    #+#             */
/*   Updated: 2019/09/19 19:18:18 by jbelinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned	word_count(const char *s, char c)
{
	unsigned	n;

	n = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			n++;
		while (*s && *s != c)
			s++;
	}
	return (n);
}

char			**ft_strsplit(char const *s, char c)
{
	unsigned	i;
	const char	*e;
	char		**table;

	i = word_count(s, c) + 1;
	if ((table = (char **)ft_memalloc(sizeof(char *) * i)) != NULL)
	{
		i = 0;
		e = s;
		while (*e)
		{
			while (*e == c)
				e++;
			s = e;
			while (*e && *e != c)
				e++;
			if (e > s)
				if ((table[i++] = ft_strndup(s, e - s)) == NULL)
				{
					ft_memrelease((void **)table);
					return (NULL);
				}
		}
	}
	return (table);
}
