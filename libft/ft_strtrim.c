/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fobiol-b <fobiol-b@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 15:34:06 by fobiol-b          #+#    #+#             */
/*   Updated: 2022/01/26 13:19:42 by fobiol-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*result;
	int		len;

	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
	{
		start++;
	}	
	end = ft_strlen(s1);
	while (s1[end - 1] && ft_strchr(set, s1[end - 1]))
	{
		end--;
	}
	if ((end - start) < 0)
		len = 0;
	else
		len = end - start;
	result = ft_substr(s1, start, len);
	return (result);
}
