/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-fadi <iel-fadi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 18:23:24 by iel-fadi          #+#    #+#             */
/*   Updated: 2025/11/09 18:28:08 by iel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int ft_putpointer(void *ptr)
{
    int count;

    count = 0;
    write(1, "0x", 2);
    count = count + 2;
    count += ft_puthex((unsigned long)ptr, 'x');
    return (count);
}