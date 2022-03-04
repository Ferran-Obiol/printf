/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fobiol-b <fobiol-b@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 14:14:10 by fobiol-b          #+#    #+#             */
/*   Updated: 2022/01/25 15:25:03 by fobiol-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*iterator;

	if (lst == NULL)
		return ;
	while (*lst != NULL)
	{
		iterator = (*lst)-> next;
		ft_lstdelone(*lst, (del));
		*lst = iterator;
	}
	lst = NULL;
}
