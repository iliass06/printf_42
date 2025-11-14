/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-fadi <iel-fadi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 15:24:28 by iel-fadi          #+#    #+#             */
/*   Updated: 2025/11/10 22:34:32 by iel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *format, ...)
{
    va_list arg;
    int count;
    
    if (!format)
        return (0);
    while (*format != '%')
    {
        write(1, format, 1);
        format++;
    }
    format++;
    va_start(arg, format);
    if (*format == 'c')
    return (ft_putchar(va_arg(arg, int)));
    else if (*format == 's')
        return(ft_putstr(va_arg(arg, char *)));
    else if (*format == 'p')
        return(ft_putpointer(va_arg(arg, void *)));
    else if (*format == 'd' || *format == 'i')
        return(ft_putnbr(va_arg(arg, int)));
    else if (*format == 'u')
        return(ft_putnbr_unsigned(va_arg(arg, unsigned int)));
    else if(*format == 'x')
        return(ft_puthex(va_arg(arg, unsigned long ), 'x'));
    else if (*format == 'X')
        return (ft_puthex(va_arg(arg, unsigned long ), 'X'));
    else if (*format == '%')
    {
        char c = '%';
        write(1, &c, 1);
        return (1);
    }
    else
    {
        count = 0;
        while (*format)
        {
            write(1, format, 1);
            count++;
        }
        return (count);
    }
}
