/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dispatch_format.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchauvin <mchauvin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 12:12:19 by mchauvin          #+#    #+#             */
/*   Updated: 2025/12/03 15:17:22 by mchauvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_dispatch_format(char spe, va_list args)
{
	if (spe == 'c')
		return (ft_print_char(va_arg(args, int)));
	if (spe == 's')
		return (ft_print_str(va_arg(args, char *)));
	if (spe == 'p')
		return (ft_print_ptr(va_arg(args, void *)));
	if (spe == 'd')
		return (ft_print_nbr(va_arg(args, int)));
	if (spe == 'i')
		return (ft_print_nbr(va_arg(args, int)));
	if (spe == 'u')
		return (ft_print_unnbr(va_arg(args, unsigned int)));
	if (spe == 'x')
		return (ft_print_hex(va_arg(args, unsigned int), 0));
	if (spe == 'X')
		return (ft_print_hex(va_arg(args, unsigned int), 1));
	if (spe == '%')
		return (ft_print_char('%'));
	return (0);
}
