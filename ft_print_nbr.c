/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchauvin <mchauvin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 09:26:34 by mchauvin          #+#    #+#             */
/*   Updated: 2025/11/18 14:35:44 by mchauvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_nbr(int n)
{
	int			cpr;
	long int	nb;

	if (!n)
	{
		write(1, "0", 1);
		return (1);
	}
	nb = n;
	cpr = 0;
	if (nb < 0)
	{
		ft_print_char('-');
		nb = -nb;
		cpr = 1;
	}
	if (nb >= 10)
		cpr += ft_print_nbr(nb / 10);
	ft_print_char(nb % 10 + '0');
	cpr++;
	return (cpr);
}
/*
#include <stdio.h>

int	main(void)
{
	int n = 2548815;
	int res = ft_print_nbr(n);

	printf(" = char printed : %d\n", res);
	return (0);
}*/