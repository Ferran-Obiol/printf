/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fobiol-b <fobiol-b@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 14:10:31 by fobiol-b          #+#    #+#             */
/*   Updated: 2022/01/26 13:47:19 by fobiol-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ret;
	unsigned int	i;
	unsigned int	j;

	if (ft_strlen(s) < len)
		ret = (char *)malloc(ft_strlen(s) + 1);
	else if (ft_strlen(s) < start)
		ret = (char *)malloc(1);
	else
		ret = (char *)malloc(len + 1);
	if (ret == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			ret[j] = s[i];
			j ++;
		}
		i ++;
	}
	ret[j] = '\0';
	return (ret);
}
