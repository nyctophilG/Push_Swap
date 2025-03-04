/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gosahin <gosahin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 11:26:05 by gosahin           #+#    #+#             */
/*   Updated: 2024/12/12 11:40:43 by gosahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_base(unsigned long d, char s, char *base)
{
	int		len;

	len = 0;
	if (d >= 16)
		len += ft_base(d / 16, s, base);
	len += ft_printf_c(base[d % 16]);
	base = NULL;
	return (len);
}

int	ft_printf_p(unsigned long d)
{
	int	len;

	len = 0;
	if (d == 0)
	{
		ft_printf_s("(nil)");
		return (5);
	}
	len += ft_printf_s("0x");
	len += ft_base(d, 'x', "0123456789abcdef");
	return (len);
}
