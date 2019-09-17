/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelinda <jbelinda@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 21:55:44 by jbelinda          #+#    #+#             */
/*   Updated: 2019/09/17 22:01:58 by jbelinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n-- && (*s1 != EOS))
		if (*s1 == *s2++)
			s1++;
		else
			return (*(const unsigned char*)s1 - *(const unsigned char *)--s2);
	return (0);
}
