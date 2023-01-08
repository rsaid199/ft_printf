/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_pointer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaid <rsaid@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 16:31:50 by rsaid             #+#    #+#             */
/*   Updated: 2022/12/28 16:48:31 by rsaid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_pointer(unsigned long num, int *x)
{
	if (num >= 16)
	{
		ft_put_pointer(num / 16, x);
		ft_put_pointer(num % 16, x);
	}
	else
	{
		if (num <= 9)
			*x += ft_putchar(num + '0');
		else
			*x += ft_putchar(num - 10 + 'a');
	}
	return (*x);
}
