/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fobiol-b <fobiol-b@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 14:42:01 by fobiol-b          #+#    #+#             */
/*   Updated: 2022/01/26 14:32:06 by fobiol-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*iter;
	unsigned char	to_find;

	iter = (unsigned char *)s;
	to_find = (unsigned char)c;
	while (n > 0)
	{
		if (*iter == to_find)
			return (iter);
		iter++;
		n--;
	}
	return (NULL);
}
