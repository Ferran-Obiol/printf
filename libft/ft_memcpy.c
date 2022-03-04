/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fobiol-b <fobiol-b@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 14:50:46 by fobiol-b          #+#    #+#             */
/*   Updated: 2022/01/25 16:34:45 by fobiol-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dest_iter;
	unsigned char	*src_iter;

	dest_iter = (unsigned char *)dst;
	src_iter = (unsigned char *)src;
	if (src == dst)
		return (dst);
	while (n > 0)
	{
		*dest_iter = *src_iter;
		src_iter++;
		dest_iter++;
		n--;
	}
	return (dst);
}
