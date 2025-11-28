/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchauvin <mchauvin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 09:24:52 by mchauvin          #+#    #+#             */
/*   Updated: 2025/11/28 13:59:54 by mchauvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int		cpr;
	int		i;
	va_list	args;

	if (!format)
		return (-1);
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
#include <stdio.h>

int	main(void)
{
	ft_printf("%c\n", 'A');
	printf("%c\n", 'A');
	ft_printf("%s\n", "Test string");
	printf("%s\n", "Test string");
	ft_printf("%p\n", "Test adress");
	printf("%p\n", "Test adress");
	ft_printf("%i\n", 555);
	printf("%i\n", 555);
	ft_printf("%d\n", -555);
	printf("%d\n", -555);
	ft_printf("%X\n", 256);
	printf("%X\n", 256);
	ft_printf("%x\n", 256);
	printf("%x\n", 256);
	ft_printf("%u\n", 256);
	printf("%u\n", 256);
	ft_printf("%%\n");
	printf("%%\n");
	ft_printf("%d", ft_printf(NULL));
	printf("%d", printf(NULL));
}*/
