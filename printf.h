/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fobiol-b <fobiol-b@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 14:45:47 by fobiol-b          #+#    #+#             */
/*   Updated: 2022/03/04 15:32:05 by fobiol-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h> 
# include <stdarg.h>

typedef	struct s_print
{
	va_list	args;
	int	wdt;		// width
	int	prc;		// precision
	int	zero;	 	// zero padding
	int	pnt;		// .
	int	dash;		// -
	int	tl;			// total_length (return value)
	int	sign;		// pos or neg number
	int	is_zero;	// is number zero
	int	perc;		// %
	int	sp;			// space flag ' '
	int hex;		//hexa
}	t_print;

#endif