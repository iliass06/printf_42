/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-fadi <iel-fadi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 15:36:35 by iel-fadi          #+#    #+#             */
/*   Updated: 2025/11/09 18:27:46 by iel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include<stdarg.h>
#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>



int ft_printf(const char *format, ...);
int ft_putchar(char c);
int ft_putstr(char *s);
int ft_putnbr(int n);
int ft_putnbr_unsigned(unsigned int n);
int ft_puthex(unsigned long n, char format);
int ft_putpointer(void *ptr);


#endif