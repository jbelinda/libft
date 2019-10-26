/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelinda <jbelinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 18:44:21 by jbelinda          #+#    #+#             */
/*   Updated: 2019/10/27 02:22:44 by jbelinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memjoin(const void *s1, size_t n1, const void *s2, size_t n2)
{
	void	*dst;
	void	*d;
	size_t	total;

	dst = NULL;
	total = n1 + n2;
	if (total && total >= ft_max(n1, n2) && (dst = malloc(total)))
	{
		d = dst;
		if (n1)
			d = ft_memcpy(d, s1, n1);
		if (n2)
			d = ft_memcpy(d + n1, s2, n2);
	}
	return (dst);
}
