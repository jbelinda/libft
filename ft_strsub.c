/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelinda <jbelinda@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 01:26:28 by jbelinda          #+#    #+#             */
/*   Updated: 2019/09/19 19:18:43 by jbelinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*d;

	if ((d = (char *)malloc(sizeof(char) * (len + 1))) != NULL)
	{
		d[len] = EOS;
		while (len--)
			d[len] = s[start + len];
	}
	return (d);
}
