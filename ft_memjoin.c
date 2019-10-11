/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelinda <jbelinda@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 18:44:21 by jbelinda          #+#    #+#             */
/*   Updated: 2019/10/11 15:03:51 by jbelinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memjoin(const void *s1, size_t n1, const void *s2, size_t n2)
{
	void	*dst;
	void	*d;

	if ((dst = malloc(n1 + n2)))
	{
		d = dst;
		if (n1)
			d = ft_memcpy(d, s1, n1);
		if (n2)
			d = ft_memcpy(d + n1, s2, n2);
	}
	return (dst);
}
