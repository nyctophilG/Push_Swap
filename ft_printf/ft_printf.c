/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gosahin <gosahin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:47:57 by gosahin           #+#    #+#             */
/*   Updated: 2024/12/12 11:39:52 by gosahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	ft_control(const char c, va_list argv)
{
	int	i;

	i = 0;
	if (c == 'c')
		i = ft_printf_c(va_arg(argv, int));
	else if (c == 's')
		i = ft_printf_s(va_arg(argv, char *));
	else if (c == 'd' || c == 'i')
		i = ft_printf_d(va_arg(argv, int));
	else if (c == 'p')
		i = ft_printf_p(va_arg(argv, unsigned long));
	else if (c == 'u')
		i = ft_printf_u(va_arg(argv, int));
	else if (c == 'x')
		i = ft_base(va_arg(argv, unsigned int), 'x', "0123456789abcdef");
	else if (c == 'X')
		i = ft_base(va_arg(argv, unsigned int), 'X', "0123456789ABCDEF");
	else if (c == '%')
		i = ft_printf_c('%');
	return (i);
}

int	ft_printf(const char *s, ...)
{
	int		i;
	va_list	arg;
	int		len;

	len = 0;
	i = 0;
	va_start(arg, s);
	while (s[i] != '\0')
	{
		if (s[i] == '%' && s[i + 1] != '\0')
		{
			len += ft_control(s[i + 1], arg);
			i++;
		}
		else
		{
			write(1, &s[i], 1);
			len++;
		}
		i++;
	}
	va_end(arg);
	return (len);
}
