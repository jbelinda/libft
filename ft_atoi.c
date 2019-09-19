/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelinda <jbelinda@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 02:01:13 by jbelinda          #+#    #+#             */
/*   Updated: 2019/09/19 04:32:53 by jbelinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include "libft.h"

int		ft_atoi(const char *str)
{
	int		res;
	bool	neg;

	res = 0;
	neg = false;
	while (ft_isspace(*str))
		str++;
	if (*str == '+' || *str == '-')
		neg = *str++ == '-';
	while (ft_isdigit(*str))
		res = res * 10 + *str++ - '0';
	return (neg ? -res : res);
}
