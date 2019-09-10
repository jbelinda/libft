/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelinda <jbelinda@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 20:58:32 by jbelinda          #+#    #+#             */
/*   Updated: 2019/09/10 20:58:34 by jbelinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*memset(void *dst, int c, size_t len)
{
	char	*p;

	p = (char *)dst;
	while (len--)
		*p++ = (unsigned char)c;
	return (dst);
}
