/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelinda <jbelinda@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 04:18:39 by jbelinda          #+#    #+#             */
/*   Updated: 2019/09/26 03:19:04 by jbelinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_lst_killer(void *c, size_t cs)
{
	if (c)
		ft_memdel(&c);
	(void)cs;
}

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*newlst;
	t_list	*el;

	if ((el = (*f)(lst)) == NULL)
		return (NULL);
	newlst = el;
	while (lst->next)
	{
		lst = lst->next;
		if ((el->next = (*f)(lst)) == NULL)
		{
			ft_lstdel(&newlst, ft_lst_killer);
			return (NULL);
		}
		el = el->next;
	}
	return (newlst);
}
