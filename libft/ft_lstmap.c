/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fobiol-b <fobiol-b@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 15:39:57 by fobiol-b          #+#    #+#             */
/*   Updated: 2022/01/25 17:34:19 by fobiol-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*iterator;

	if (lst == NULL)
		return (NULL);
	newlist = NULL;
	while (lst != NULL)
	{
		iterator = ft_lstnew(f(lst->content));
		if (iterator)
			ft_lstadd_back(&newlist, iterator);
		else
		{
			if (newlist)
			{
				ft_lstclear (&newlist, del);
				return (NULL);
			}
		}
		lst = lst -> next;
	}
	return (newlist);
}
