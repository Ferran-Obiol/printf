/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fobiol-b <fobiol-b@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 15:15:57 by fobiol-b          #+#    #+#             */
/*   Updated: 2022/01/26 13:18:48 by fobiol-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdupn(const char *s1, size_t len)
{
	char	*result;

	result = (char *)malloc((len + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	ft_strlcpy(result, s1, len + 1);
	return (result);
}

static int	get_word_length(char const *s, char c)
{
	char	*length;

	length = ft_strchr(s, c);
	if (length == NULL)
		return (ft_strlen(s));
	else
		return (length - s);
}

static int	ft_count_words(char const *s, char c)
{
	int		word_length;
	int		word_counter;

	word_counter = 0;
	while (*s)
	{
		if (*s != c)
		{
			word_length = get_word_length(s, c);
			s = s + word_length;
			word_counter++;
		}
		else
			s++;
	}
	return (word_counter);
}

char	**ft_split(char const *s, char c)
{
	int		word_counter;
	int		word_length;
	char	*new_word;
	char	**result;

	result = (char **)malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (result == NULL)
		return (NULL);
	word_counter = 0;
	while (*s)
	{
		if (*s != c)
		{
			word_length = get_word_length(s, c);
			new_word = ft_strdupn(s, word_length);
			result[word_counter] = new_word;
			s = s + word_length;
			word_counter++;
			word_length = 0;
		}
		else
			s++;
	}
	result[word_counter] = NULL;
	return (result);
}
