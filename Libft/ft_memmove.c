/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gosahin <gosahin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 14:16:57 by gosahin           #+#    #+#             */
/*   Updated: 2024/10/14 13:56:10 by gosahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	d = ((unsigned char *)dst);
	s = ((unsigned char *)src);
	if (d < s)
	{
		while (len > 0)
		{
			*d++ = *s++;
			len--;
		}
	}
	else if (d > s)
	{
		d += len;
		s += len;
		while (len > 0)
		{
			*--d = *--s;
			len--;
		}
	}
	return (dst);
}
