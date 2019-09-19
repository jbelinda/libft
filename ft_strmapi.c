/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelinda <jbelinda@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 01:25:44 by jbelinda          #+#    #+#             */
/*   Updated: 2019/09/19 19:17:07 by jbelinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*d;

	if ((d = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1))) != NULL)
	{
		i = 0;
		while (*s)
		{
			d[i] = (*f)(i, *s++);
			i++;
		}
		d[i] = EOS;
	}
	return (d);
}
