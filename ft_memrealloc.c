/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memrealloc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelinda <jbelinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 01:39:15 by jbelinda          #+#    #+#             */
/*   Updated: 2019/10/16 04:56:58 by jbelinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memrealloc(const void *p, size_t psize, size_t nsize)
{
	void	*new;

	new = (void *)p;
	if (nsize)
		if ((new = ft_memalloc(nsize)) && p)
		{
			new = ft_memcpy(new, p, ft_min(psize, nsize));
			ft_memdel((void **)&p);
		}
	return (new);
}
