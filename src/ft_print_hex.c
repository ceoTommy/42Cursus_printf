/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tford <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 16:23:24 by tford             #+#    #+#             */
/*   Updated: 2022/02/21 19:18:47 by tford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include <unistd.h>

//cap is ussually either 'a' or 'A'
//determines whether its capitalised or not
static void print_hex_unit(unsigned long hex_num, int as_upper)
{
	char	c;

	if (hex_num <= 9)
		c = '0' + hex_num;
	else
	{
		c = hex_num - 10;
		if (as_upper)
			c += 'A';
		else
			c += 'a';
	}
	write(1, &c, 1);
}

//takes a decimal number and converts it too hex
//displays letters capitalized if as_upper !0
//returns amount printed
int	ft_print_hex(unsigned long hex_num, int as_upper)
{
	int	n_printed;

    if (hex_num >= 16)
    {
        n_printed = ft_print_hex(hex_num / 16, as_upper) + 1;
    }
	else
	{
		n_printed = 1;
	}
    print_hex_unit(hex_num % 16, as_upper);
    return (n_printed);
}
