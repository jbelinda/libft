/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelinda <jbelinda@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 19:49:23 by jbelinda          #+#    #+#             */
/*   Updated: 2019/09/24 04:00:48 by jbelinda         ###   ########.fr       */
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

char				*ft_itoa(int n)
{
	char	*str;
	int		neg;
	int		l;

	neg = (n < 0);
	l = ft_number_length(n);
	str = ft_strnew(sizeof(char) * l);
	if (str)
	{
		if (neg)
			str[0] = '-';
		while (--l + (neg ? 0 : 1))
		{
			str[l] = ft_abs(n % 10) + '0';
			n /= 10;
		}
	}
	return (str);
}
