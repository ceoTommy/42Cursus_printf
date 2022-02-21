/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tford <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 16:26:31 by tford             #+#    #+#             */
/*   Updated: 2022/02/21 17:42:36 by tford            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF
# define FT_PRINTF

#include <stdarg.h>

// core //
int	ft_printf(const char *str, ...);

// print types //
int	ft_print_char(int c);
int	ft_print_str(char *str);
int	ft_print_ptr(unsigned long ptr);
int	ft_print_hex(unsigned long hex_num, int as_upper);
int	ft_print_u_int(unsigned int num);
int	ft_print_int(int num);

#endif
