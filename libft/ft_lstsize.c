/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsizze.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fobiol-b <fobiol-b@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 20:20:54 by fobiol-b          #+#    #+#             */
/*   Updated: 2022/01/24 20:23:15 by fobiol-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		counter;
	t_list	*iterator;

	counter = 0;
	if (lst == NULL)
		return (0);
	iterator = lst;
	counter++;
	while (iterator->next != NULL)
	{
		iterator = iterator -> next;
		counter++;
	}
	return (counter);
}
