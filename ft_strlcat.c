/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelinda <jbelinda@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 20:17:01 by jbelinda          #+#    #+#             */
/*   Updated: 2019/09/19 19:16:45 by jbelinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static inline size_t	ft_min(size_t x, size_t y)
{
	return (x <= y ? x : y);
}

size_t					ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		dstlen;
	size_t		i;

	dstlen = ft_min(ft_strlen(dst), size);
	i = dstlen;
	while (src[dstlen - i] && dstlen + 1 < size)
	{
		dst[dstlen] = src[dstlen - i];
		dstlen++;
	}
	if (i < size)
		dst[dstlen] = EOS;
	return (ft_strlen(src) + i);
}
