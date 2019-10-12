/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memrealloc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelinda <jbelinda@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 01:39:15 by jbelinda          #+#    #+#             */
/*   Updated: 2019/10/13 01:49:01 by jbelinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memrealloc(void *p, size_t psize, size_t nsize)
{
	void	*new;

	new = p;
	if (nsize)
		if ((new = ft_memalloc(psize + nsize)) && p)
			new = ft_memcpy(new, p, psize);
	return (new);
}
