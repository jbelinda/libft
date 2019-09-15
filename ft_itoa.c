/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelinda <jbelinda@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 19:49:23 by jbelinda          #+#    #+#             */
/*   Updated: 2019/09/15 17:51:20 by jbelinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdbool.h>

static inline int ft_abs(int i)
{
	return (i < 0 ? -i : i );
}

static int	ft_number_length(int n)
{
	int l;

	l = n < 0 ? 1 : 0;
	while (n)
	{
		++l;
		n /= 10;
	}
	return (l ? l : 1);
}

char		*ft_itoa(int n)
{
	char	*str;
	bool	neg;
	int		l;

	neg = (n < 0);
	l = ft_number_length(n);
	str = (char *)malloc(sizeof(char) * l + 1);
	if (str)
	{
		str[l] = '\0';
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
