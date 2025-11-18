/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchauvin <mchauvin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 09:27:14 by mchauvin          #+#    #+#             */
/*   Updated: 2025/11/18 15:45:43 by mchauvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned int n, int uppercase)
{
	const char	*base_upp;
	const char	*base_low;
	const char	*base;
	int			cpr;

	base = 0;
	base_upp = "0123456789ABCDEF";
	base_low = "0123456789abcdef";
	cpr = 0;
	if (!n)
	{
		ft_print_char('0');
		return (1);
	}
	if (uppercase == 0)
		base = base_low;
	else if (uppercase == 1)
		base = base_upp;
	if (n >= 16)
		cpr += ft_print_hex((n / 16), uppercase);
	ft_print_char(base[n % 16]);
	cpr += 1;
	return (cpr);
}
/*
#include <stdio.h>

int	main(void)
{
	unsigned int n = 2455877551;
	int res = ft_print_hex(n, 0);

	printf("  = chars printed : %d\n", res);
}*/