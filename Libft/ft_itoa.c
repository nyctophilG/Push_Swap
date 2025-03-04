/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gosahin <gosahin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:11:21 by gosahin           #+#    #+#             */
/*   Updated: 2024/10/28 11:41:05 by gosahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nlen(int n)
{
	int	digit;

	digit = 0;
	if (n == 0)
		return (1);
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		n *= -1;
		digit++;
	}
	while (n > 0)
	{
		n = n / 10;
		digit++;
	}
	return (digit);
}

static	char	*ft_mod(char *s, int nlen, int n)
{
	nlen -= 1;
	if (n == -2147483648)
	{
		s[nlen] = '8';
		nlen--;
		n = n / 10;
	}
	if (n == 0)
	{
		s[nlen] = '0';
		return (s);
	}
	if (n < 0)
	{
		s[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		s[nlen--] = (n % 10) + '0';
		n = n / 10;
	}
	return (s);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		nlen;

	nlen = ft_nlen(n);
	s = (char *)malloc(sizeof(char) * (nlen + 1));
	if (s == NULL)
		return (NULL);
	s[nlen] = '\0';
	return (ft_mod(s, nlen, n));
}
