/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelinda <jbelinda@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 17:53:53 by jbelinda          #+#    #+#             */
/*   Updated: 2019/09/15 18:01:34 by jbelinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *ls;
	const unsigned char *rs;

	ls = (const unsigned char *)s1;
	rs = (const unsigned char *)s2;
	while (n--)
		if (*ls++ != *rs++)
			return (*--ls - *--rs);
	return (0);
}
