/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelinda <jbelinda@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 02:26:27 by jbelinda          #+#    #+#             */
/*   Updated: 2019/09/18 02:34:58 by jbelinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*m;

	m = NULL;
	if (size)
	{
		m = malloc(size);
		if (m != NULL)
			ft_bzero(m, size);
	}
	return (m);
}
