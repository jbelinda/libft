/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelinda <jbelinda@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 20:17:01 by jbelinda          #+#    #+#             */
/*   Updated: 2019/09/17 20:36:39 by jbelinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		dstlen;
	const char	*from;

	from = src;
	dstlen = ft_strlen(dst);
	dst += dstlen;
	size -= dstlen;
	if (size-- == 0)
		return (dstlen + ft_strlen(src));
	while (*src)
	{
		if (size)
		{
			*dst++ = *src;
			size--;
		}
		src++;
	}
	*dst = '\0';
	return (dstlen + (src - from));
}
