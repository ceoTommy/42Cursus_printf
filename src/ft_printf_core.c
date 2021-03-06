/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_core.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tford <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 15:36:56 by tford             #+#    #+#             */
/*   Updated: 2022/02/21 19:32:55 by tford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include <stdarg.h>

static int	ft_print_formats(const char format, va_list args)
{
	if (format == 'c')
		return (ft_print_char(va_arg(args, int)));
	else if (format == 's')
		return (ft_print_str(va_arg(args, char *)));
	else if (format == 'p')
		return (ft_print_ptr(va_arg(args, unsigned long)));
	else if (format == 'i' || format == 'd')
		return (ft_print_int(va_arg(args, int)));
	else if (format == 'u')
		return (ft_print_u_int(va_arg(args, unsigned int)));
	else if (format == 'x')
		return (ft_print_hex(va_arg(args, unsigned int), 0));
	else if (format == 'X')
		return (ft_print_hex(va_arg(args, unsigned int), 1));
	else if (format == '%')
		return (ft_print_char('%'));
	else
		return (0);
}

//todo: find out what it wants returned the bytes or the number 
//cant end in %, printf throws an error
int	ft_printf(const char *str, ...)
{
	int		n_printed;
	int		i;
	va_list	args;

	va_start(args, str);
	i = 0;
	n_printed = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			n_printed += ft_print_formats(str[++i], args);
		}
		else
		{
			n_printed += ft_print_char(str[i]);
		}
		i++;
	}
	va_end(args);
	return (n_printed);
}
