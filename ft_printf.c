/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fobiol-b <fobiol-b@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 13:39:00 by fobiol-b          #+#    #+#             */
/*   Updated: 2022/03/04 17:07:47 by fobiol-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "printf.h"

t_print	*ft_initialise_tab(t_print *tab)
{
	tab->wdt = 0;
	tab->prc = 0;
	tab->zero = 0;
	tab->pnt = 0;
	tab->sign = 0;
	tab->tl = 0;
	tab->is_zero = 0;
	tab->dash = 0;
	tab->perc = 0;
	tab->sp = 0;
	tab->hex = 0;
	return (tab);
}

int ft_eval_witdh(t_print *tab, char *format, int index)
{
	if(format[index] == )
	
}

int	ft_eval_format(t_print *tab, char *format, int index)
{
	while (!ft_strchr("udcsupxX%", format[index]))
	{
		if (format[index] == '-')
			tab -> dash = 1;
		if (format[index] == '0')
			tab -> zero = 1;
		if (format[index] == '.')
			tab -> pnt = 1;
		if (format[index] == '#')
			tab -> hex;
		if (format[index] == ' ')
			tab -> sp = 1;
		if (format[index] == '+')
			tab -> sign = 1;
		if (format[index] == '%')
			tab -> perc = 1;
		index++;
	}
	return (index);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		ret;
	t_print	*tab;

	tab = (t_print *)malloc(sizeof(t_print));
	if (!tab)
		return (-1);
	ft_initialise_tab(tab);
	i = -1;
	ret = 0;
	while (format[++i])
	{
		if (format[i] == '%')
			i = ft_eval_format(tab, format, i + 1);
		else
			ret += write(1, &format[i], 1);
	}
	va_end(tab->args);
	ret += tab->tl;
	free (tab);
	return (ret);
}
