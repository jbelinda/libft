/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rand.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelinda <jbelinda@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 19:33:47 by jbelinda          #+#    #+#             */
/*   Updated: 2021/07/11 19:36:02 by jbelinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned long seed = 1;

int ft_rand(void)
{
	seed = seed * 1103515245 + 12345;
	return ((unsigned int)(seed/65536) % (FT_RAND_MAX + 1));
}

void ft_srand(unsigned int init_seed)
{
	seed = init_seed;
}
