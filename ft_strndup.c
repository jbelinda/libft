/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelinda <jbelinda@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 01:25:53 by jbelinda          #+#    #+#             */
/*   Updated: 2019/09/19 19:17:36 by jbelinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s, size_t n)
{
	size_t	len;
	char	*dup;

	len = ft_strlen(s);
	len = (len < n ? len : n);
	if ((dup = (char *)malloc(sizeof(char) * (len + 1))) != NULL)
	{
		ft_memcpy((void *)dup, (const void *)s, len);
		dup[len] = EOS;
	}
	return (dup);
}
