/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelinda <jbelinda@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 17:52:59 by jbelinda          #+#    #+#             */
/*   Updated: 2019/09/04 21:16:51 by jbelinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char *s;

	s = ft_itoa(n);
	if (s)
	{
		ft_putstr_fd(s, fd);
		free(s);
	}
}
