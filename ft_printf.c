/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-fadi <iel-fadi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 15:24:28 by iel-fadi          #+#    #+#             */
/*   Updated: 2025/12/02 02:17:04 by iel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	arg;
	int		count;

	count = 0;
	if (!format)
		return (-1);
	if (write(1, 0, 0) == -1)
		return (-1);
	va_start(arg, format);
	while (*format)
	{
		if (*format != '%')
			count += ft_putchar(*format);
		else
		{
			format++;
			if (*format == '\0')
				break;
			count += ft_type(*format, arg);
		}
		format++;
	}
	va_end(arg);
	if (count < 0)
		return (-1);
	return (count);
}
