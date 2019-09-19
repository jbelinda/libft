/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelinda <jbelinda@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 17:52:59 by jbelinda          #+#    #+#             */
/*   Updated: 2019/09/20 01:44:14 by jbelinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static inline int	ft_abs(int i)
{
	return (i < 0 ? -i : i);
}

static int			ft_number_length(int n)
{
	int l;

	l = n < 0 ? 2 : 1;
	while (n /= 10)
		++l;
	return (l);
}

void				ft_putnbr_fd(int n, int fd)
{
	char	str[12];
	int		neg;
	int		l;

	neg = (n < 0);
	l = ft_number_length(n);
	str[l] = '\0';
	if (neg)
		str[0] = '-';
	while (--l + (neg ? 0 : 1))
	{
		str[l] = ft_abs(n % 10) + '0';
		n /= 10;
	}
	ft_putstr_fd(str, fd);
}
