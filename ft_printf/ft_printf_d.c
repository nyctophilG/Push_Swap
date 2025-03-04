/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gosahin <gosahin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 18:18:51 by gosahin           #+#    #+#             */
/*   Updated: 2024/12/09 13:40:29 by gosahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	ft_len(int s)
{
	int	count;

	count = 0;
	if (s == 0)
	{
		return (1);
	}
	else if (s < 0)
	{
		if (s == -2147483648)
		{
			return (11);
		}
		s *= -1;
		count++;
	}
	while (s >= 1)
	{
		s /= 10;
		count++;
	}
	return (count);
}

int	ft_printf_d(int s)
{
	if (s == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (s > -10 && s < 0)
	{
		ft_printf_c('-');
		ft_printf_c((s * -1) + '0');
	}
	else if (s < 10 && s >= 0)
	{
		ft_printf_c(s + '0');
	}
	else if (s >= 10)
	{
		ft_printf_d(s / 10);
		ft_printf_d(s % 10);
	}
	else if (s <= -10)
	{
		ft_printf_c('-');
		ft_printf_d(s * -1);
	}
	return (ft_len(s));
}
