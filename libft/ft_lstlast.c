/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fobiol-b <fobiol-b@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 20:09:50 by fobiol-b          #+#    #+#             */
/*   Updated: 2022/01/24 20:38:22 by fobiol-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*iterator;

	if (lst == NULL)
		return (NULL);
	iterator = lst;
	while (iterator->next != NULL)
	{
		iterator = iterator -> next;
	}
	return (iterator);
}
