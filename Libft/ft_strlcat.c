/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gosahin <gosahin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 13:48:31 by gosahin           #+#    #+#             */
/*   Updated: 2024/10/26 11:42:04 by gosahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	d;
	size_t	j;
	size_t	s;

	d = (ft_strlen(dst));
	j = 0;
	s = (ft_strlen(src));
	if (dstsize <= d)
	{
		if (dstsize == 0)
		{
			return (s);
		}
		return (s + dstsize);
	}
	while (src[j] != '\0' && d + 1 < dstsize)
	{
		dst[d + j] = src[j];
		j++;
		dstsize--;
	}
	dst[d + j] = '\0';
	return (s + d);
}
