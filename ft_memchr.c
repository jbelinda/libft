/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelinda <jbelinda@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 18:41:02 by jbelinda          #+#    #+#             */
/*   Updated: 2019/09/17 18:41:10 by jbelinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char *str;

	str = (const unsigned char*)s;
	while (n--)
		if (*str++ == (unsigned char)c)
			return ((void *)--str);
	return (NULL);
}
