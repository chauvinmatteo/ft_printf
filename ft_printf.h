/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchauvin <mchauvin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 17:14:56 by mchauvin          #+#    #+#             */
/*   Updated: 2025/11/18 14:42:38 by mchauvin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_print_char(int c);
int	ft_print_str(char *s);
int	ft_print_nbr(int n);
int	ft_print_unnbr(unsigned int n);
int	ft_print_hex(unsigned int n, int uppercase);
int	ft_print_ptr(void *ptr);
int	ft_dispatch_format(char spe, va_list args);
int	ft_printf(const char *format, ...);

#endif