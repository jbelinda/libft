/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelinda <jbelinda@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 18:06:49 by jbelinda          #+#    #+#             */
/*   Updated: 2019/09/15 19:13:30 by jbelinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	int				direction;

	if (n && (dst != src))
	{
		d = (unsigned char *)dst;
		s = (unsigned char *)src;
		if ((unsigned long)dst < (unsigned long)src)
			direction = 1;
		else
		{
			direction = -1;
			d += n - 1;
			s += n - 1;
		}
		while (n--)
		{
			*d = *s;
			d += direction;
			s += direction;
		}
	}
	return (dst);
}
