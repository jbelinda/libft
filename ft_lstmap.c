/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelinda <jbelinda@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 04:18:39 by jbelinda          #+#    #+#             */
/*   Updated: 2019/09/19 04:25:05 by jbelinda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*newlst;
	t_list	*el;

	if (lst == NULL || (el = ft_lstnew(NULL, 0)) == NULL)
		return (NULL);
	el = (*f)(lst);
	newlst = el;
	while (lst->next)
	{
		lst = lst->next;
		el->next = (*f)(lst);
		el = el->next;
	}
	return (newlst);
}
