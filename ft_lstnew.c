/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelinda <jbelinda@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 03:00:52 by jbelinda          #+#    #+#             */
/*   Updated: 2019/09/19 19:08:21 by jbelinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(const void *content, size_t content_size)
{
	t_list	*list;

	if ((list = (t_list *)malloc(sizeof(t_list))) != NULL)
	{
		list->next = NULL;
		if (content == NULL)
		{
			list->content = NULL;
			list->content_size = 0;
		}
		else
		{
			if ((list->content = malloc(content_size)) == NULL)
			{
				free(list);
				list = NULL;
			}
			else
			{
				ft_memcpy(list->content, content, content_size);
				list->content_size = content_size;
			}
		}
	}
	return (list);
}
