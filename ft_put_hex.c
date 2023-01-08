/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaid <rsaid@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 19:04:36 by rsaid             #+#    #+#             */
/*   Updated: 2022/12/28 16:43:09 by rsaid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_hex(unsigned int num, const char format, int *x)
{
	if (num >= 16)
	{
		ft_put_hex(num / 16, format, x);
		ft_put_hex(num % 16, format, x);
	}
	else
	{
		if (num <= 9)
			*x += ft_putchar(num + '0');
		else
		{
			if (format == 'X')
				*x += ft_putchar((num - 10 + 'A'));
			if (format == 'x')
				*x += ft_putchar((num - 10 + 'a'));
		}
	}
	return (*x);
}
