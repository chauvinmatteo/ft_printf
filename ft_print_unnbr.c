/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unnbr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchauvin <mchauvin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 09:26:19 by mchauvin          #+#    #+#             */
/*   Updated: 2025/11/18 14:20:08 by mchauvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unnbr(unsigned int n)
{
	int	cpr;

	cpr = 0;
	if (n == 0)
	{
		ft_print_char('0');
		return (1);
	}
	if (n >= 10)
		cpr += ft_print_unnbr(n / 10);
	ft_print_char((n % 10) + '0');
	cpr += 1;
	return (cpr);
}
/*
#include <stdio.h>

int	main(void)
{
	unsigned int n = 42;
	int res = ft_print_unnbr(n);

	printf(" = char printed : %d\n", res);
	return (0);
}*/