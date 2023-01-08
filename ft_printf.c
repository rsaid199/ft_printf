/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaid <rsaid@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 19:17:20 by rsaid             #+#    #+#             */
/*   Updated: 2022/12/28 17:32:06 by rsaid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	typechecker(va_list args, char c)
{
	int	x;

	x = 0;
	if (c == 'c')
		x += ft_putchar(va_arg(args, int));
	else if (c == 'd' || c == 'i')
		x = ft_putnbr(va_arg(args, int));
	else if (c == 's')
		x += ft_putstr(va_arg(args, char *));
	else if (c == 'u')
		x += ft_putunsigned(va_arg(args, unsigned int));
	else if (c == 'x' || c == 'X')
		ft_put_hex(va_arg(args, unsigned int), c, &x);
	else if (c == 'p')
	{
		x += write(1, "0x", 2);
		ft_put_pointer(va_arg(args, unsigned long), &x);
	}
	else
		x += ft_putchar(c);
	return (x);
}

int	ft_printf(const char *str, ...)
{
	int		counter;
	int		x;
	va_list	args;

	counter = 0;
	x = 0;
	va_start(args, str);
	while (str[counter] != '\0')
	{
		if (str[counter] == '%')
		{	
			counter++;
			x += typechecker(args, str[counter]);
			counter++;
		}
		else
		{
			x += write(1, &str[counter], 1);
			counter++;
		}
	}
	va_end (args);
	return (x);
}
// int main()
// {
//     ft_printf(" %p\n %p\n ", LONG_MIN, LONG_MAX);
// 	write(1, "\n", 1);
// 	printf(" %p\n %p\n ", LONG_MIN, LONG_MAX);
// }
