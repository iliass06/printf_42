/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-fadi <iel-fadi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 02:06:06 by iel-fadi          #+#    #+#             */
/*   Updated: 2025/12/02 02:28:02 by iel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_type(char format, va_list arg)
{
	int	count;

	count = 0;
	if (format == 'c')
		count += ft_putchar(va_arg(arg, int));
	if (format == 's')
		count += ft_putstr(va_arg(arg, char *));
	if (format == 'p')
		count += ft_putpointer(va_arg(arg, void *));
	if (format == 'd' || format == 'i')
		count += ft_putnbr(va_arg(arg, int));
	if (format == 'u')
		count += ft_putnbr_unsigned(va_arg(arg, unsigned int));
	if (format == 'x')
		count += ft_puthex((unsigned long)va_arg(arg, unsigned int), 'x');
	if (format == 'X')
		count += ft_puthex((unsigned long)va_arg(arg, unsigned int), 'X');
	if (format == '%')
		count += ft_putchar(format);
	return (count);
}


