/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchauvin <mchauvin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 09:27:12 by mchauvin          #+#    #+#             */
/*   Updated: 2025/11/18 16:08:10 by mchauvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_put_hex(unsigned long n)
{
	char	*base;
	int		cpr;

	base = "0123456789abcdef";
	cpr = 0;
	if (n >= 16)
		cpr += ft_put_hex(n / 16);
	ft_print_char(base[n % 16]);
	cpr++;
	return (cpr);
}

int	ft_print_ptr(void *ptr)
{
	unsigned long	ptr_t;
	int				cpr;

	ptr_t = (unsigned long)ptr;
	if (!ptr)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	write(1, "0x", 2);
	cpr = 2;
	cpr += ft_put_hex(ptr_t);
	return (cpr);
}

// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	int n = 1;
// 	int *ptr = &n;
// 	int res = ft_print_ptr(ptr);
// 	ft_printf(" = char printed : %d\n", res);
// 	printf(" = char printed : %d\n", res);
// 	return (0);
// }