/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelinda <jbelinda@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 03:37:45 by jbelinda          #+#    #+#             */
/*   Updated: 2019/09/19 19:07:37 by jbelinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*todel;
	t_list	*next;

	todel = *alst;
	while (todel)
	{
		next = todel->next;
		del(todel->content, todel->content_size);
		free(todel);
		todel = next;
	}
	*alst = NULL;
}
