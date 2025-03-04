/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gosahin <gosahin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:08:04 by gosahin           #+#    #+#             */
/*   Updated: 2024/12/09 13:14:10 by gosahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	ft_len(unsigned long s)
{
	int	count;

	count = 0;
	if (s == 0)
	{
		return (1);
	}
	while (s >= 1)
	{
		s /= 10;
		count++;
	}
	return (count);
}

int	ft_printf_u(unsigned int d)
{
	if (d < 10)
	{
		ft_printf_c(d + '0');
	}
	else if (d >= 10)
	{
		ft_printf_u(d / 10);
		ft_printf_u(d % 10);
	}
	return (ft_len(d));
}
