/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gosahin <gosahin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 13:59:17 by gosahin           #+#    #+#             */
/*   Updated: 2024/10/26 15:26:33 by gosahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	*r;

	i = 0;
	s = ((unsigned char *)s1);
	r = ((unsigned char *)s2);
	if (n == 0)
	{
		return (0);
	}
	while (n != 0)
	{
		if (s[i] != r[i])
		{
			return (s[i] - r[i]);
		}
		n--;
		i++;
	}
	return (0);
}
