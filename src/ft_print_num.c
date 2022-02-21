/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tford <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 16:14:39 by tford             #+#    #+#             */
/*   Updated: 2022/02/21 18:09:40 by tford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include <unistd.h>

//prints unsigned ints recursivly
//returns the number of char printed
int	ft_print_u_int(unsigned int num)
{
	int		n_printed;
	char	c;

	if (num >= 10)
	{
		n_printed = ft_print_u_int(num / 10) + 1;
	}
	else
		n_printed = 1;
	c = (num % 10) + '0';
	write(1, &c, 1);
	return (n_printed);
}

//writes a negetive if there is one
//parses unsigned int to ft_print_u_int
//returns the number of char printed
int	ft_print_int(int num)
{
	unsigned int	pos_num;
	int				n_printed;

	n_printed = 0;
	if (num < 0)
	{
		n_printed += write(1, "-", 1);
		pos_num = num * -1;
	}
	else
		pos_num = (unsigned int)num;
	n_printed += ft_print_u_int(pos_num);
	return (n_printed);
}
