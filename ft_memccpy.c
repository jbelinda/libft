/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelinda <jbelinda@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 18:41:25 by jbelinda          #+#    #+#             */
/*   Updated: 2019/09/17 18:41:50 by jbelinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*to;
	const unsigned char	*from;

	to = (unsigned char *)dst;
	from = (const unsigned char *)src;
	while (n--)
		if ((*to++ = *from++) == (unsigned char)c)
			return ((void *)to);
	return (NULL);
}
