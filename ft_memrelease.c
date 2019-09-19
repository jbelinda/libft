/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memrelease.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelinda <jbelinda@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 01:23:29 by jbelinda          #+#    #+#             */
/*   Updated: 2019/09/19 19:10:09 by jbelinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*
** Releases dynamically allocated NULL-terminated array of pointers
*/

void	ft_memrelease(void **a)
{
	unsigned	i;

	i = 0;
	while (a[i])
		free(a[i++]);
	free(a);
}
