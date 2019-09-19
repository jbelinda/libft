/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelinda <jbelinda@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 01:25:34 by jbelinda          #+#    #+#             */
/*   Updated: 2019/09/19 19:17:00 by jbelinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*d;
	char	*r;

	if ((d = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1))) != NULL)
	{
		r = d;
		while (*s)
			*r++ = (*f)(*s++);
		*r = EOS;
	}
	return (d);
}
