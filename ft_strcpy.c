/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelinda <jbelinda@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 18:44:13 by jbelinda          #+#    #+#             */
/*   Updated: 2019/09/17 18:44:17 by jbelinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stddef.h>
#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	unsigned char *to;

	to = ft_memccpy((void *)dst, (const void *)src, (int)EOS, ULONG_MAX);
	return (dst);
}
