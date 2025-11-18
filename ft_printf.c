/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchauvin <mchauvin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 09:24:52 by mchauvin          #+#    #+#             */
/*   Updated: 2025/11/18 17:03:15 by mchauvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int	cpr;
	int	i;

	va_list(args);
	va_start(args, format);
	i = 0;
	cpr = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			cpr += ft_dispatch_format(format[i + 1], args);
			i += 2;
		}
		else
		{
			write(1, &format[i], 1);
			cpr++;
			i++;
		}
	}
	va_end(args);
	return (cpr);
}
/*
int	main(void)
{
	ft_printf("%c\n");
	ft_printf("%s\n");
	ft_printf("%p\n");
	ft_printf("%i\n");
	ft_printf("%d\n");
	ft_printf("%X\n");
	ft_printf("%x\n");
	ft_printf("%u\n");
	ft_printf("%%\n");
}*/