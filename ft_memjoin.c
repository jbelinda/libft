/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelinda <jbelinda@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 18:44:21 by jbelinda          #+#    #+#             */
/*   Updated: 2019/09/18 18:44:24 by jbelinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memjoin(const void *s1, size_t n1, const void *s2, size_t n2)
{
	void	*dst;

	if ((dst = malloc(n1 + n2)))
	{
		dst = ft_memcpy(dst, s1, n1);
		dst = ft_memcpy(dst + n1, s2, n2);
	}
	return (dst);
}
