/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tford <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 18:05:55 by tford             #+#    #+#             */
/*   Updated: 2022/02/21 19:22:30 by tford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include <unistd.h>

int	ft_print_ptr(unsigned long ptr)
{
	int	n_printed;

	n_printed = write(1, "0x", 2);
	n_printed += ft_print_hex(ptr, 0); 
	return (n_printed);
}
