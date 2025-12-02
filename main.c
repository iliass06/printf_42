/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-fadi <iel-fadi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 02:56:19 by iel-fadi          #+#    #+#             */
/*   Updated: 2025/12/02 02:56:20 by iel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	int	*p;
	int	b;
	int	a;

	b = 42;
	p = &b;
	a = ft_printf("%p\n", NULL);
	ft_printf("%d", a);
}

// int	main(void)
// {
// 	// int a = 42;

// 	// ft_printf("%p", NULL);
// 	int result = printf("S %%\n", "characters were written");

// 	printf("%d characters were written", result);

// 	return (0);
// }