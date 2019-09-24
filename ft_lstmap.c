/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelinda <jbelinda@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 04:18:39 by jbelinda          #+#    #+#             */
/*   Updated: 2019/09/24 06:08:00 by jbelinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_lst_killer(void *c, size_t cs)
{
	if (c)
	{
		*(char *)c = (char)(cs & 255);
		free(c);
	}
}

static void	ft_copy_content(t_list *dst, t_list *src)
{
	dst->content = src->content;
	dst->content_size = src->content_size;
}

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*newlst;
	t_list	*el;
	t_list	*tmp;

	if ((el = ft_lstnew(NULL, 0)) == NULL)
		return (NULL);
	tmp = (*f)(lst);
	ft_copy_content(el, tmp);
	newlst = el;
	while (lst->next)
	{
		lst = lst->next;
		tmp = (*f)(lst);
		if ((el->next = ft_lstnew(NULL, 0)))
		{
			el = el->next;
			ft_copy_content(el, tmp);
		}
		else
		{
			ft_lstdel(&newlst, ft_lst_killer);
			return (NULL);
		}
	}
	return (newlst);
}
