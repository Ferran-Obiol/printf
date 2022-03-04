/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fobiol-b <fobiol-b@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 18:04:57 by fobiol-b          #+#    #+#             */
/*   Updated: 2022/01/25 16:08:02 by fobiol-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_decimal_size(int n)
{
	int	length;

	length = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		length++;
	while (n / 10 != 0)
	{
		n /= 10;
		length++;
	}
	length++;
	return (length);
}

char	*ft_itoa(int n)
{
	int		length;
	char	*result;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	length = get_decimal_size(n);
	result = (char *)ft_calloc((length + 1), sizeof(char));
	if (result == NULL)
		return (NULL);
	result[length--] = '\0';
	if (n < 0)
	{
		result[0] = '-';
		n = n * (-1);
	}
	if (n == 0)
		result[0] = '0';
	while (n / 10 != 0)
	{
		result[length--] = '0' + (n % 10);
		n /= 10;
	}
	result[length] = '0' + (n % 10);
	return (result);
}
