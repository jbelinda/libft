/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelinda <jbelinda@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 20:56:43 by jbelinda          #+#    #+#             */
/*   Updated: 2019/09/17 21:02:34 by jbelinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*p;

	p = s + ft_strlen(s);
	while ((*p != (char)c) && p > s)
		p--;
	return (*p == (char)c ? (char *)p : NULL);
}
