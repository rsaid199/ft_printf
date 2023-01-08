/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaid <rsaid@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 17:08:27 by rsaid             #+#    #+#             */
/*   Updated: 2022/12/28 17:45:43 by rsaid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

int	ft_putchar(char c);
int	ft_printf(const char *str, ...);
int	ft_put_hex(unsigned int num, const char format, int *x);
int	ft_putnbr(int n);
int	ft_putstr(char *s);
int	ft_putunsigned(unsigned int n);
int	nbrlen(int x);
int	ft_put_pointer(unsigned long num, int *x);

#endif
