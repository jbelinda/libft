/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelinda <jbelinda@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 00:09:37 by jbelinda          #+#    #+#             */
/*   Updated: 2019/09/18 01:28:30 by jbelinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		nlen;
	size_t		slen;
	char		*s;
	const char	*sub;

	if (!(nlen = ft_strlen(needle)))
		return ((char *)haystack);
	sub = haystack;
	while ((s = ft_strchr(sub, *needle)) != NULL)
		if (((s - haystack) < len) &&
			(ft_strlen(s) >= nlen) &&
			(ft_strncmp(s, needle, nlen)) == 0)
			return (s);
		else
			sub = s + 1;	
	return (NULL);
}
