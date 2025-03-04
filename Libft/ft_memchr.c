/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gosahin <gosahin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:25:45 by gosahin           #+#    #+#             */
/*   Updated: 2024/10/26 17:54:37 by gosahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i ;
	unsigned char	*x;

	x = ((unsigned char *)s);
	i = 0;
	while (i < n)
	{
		if (x[i] == ((unsigned char )c))
		{
			return (((void *)x) + i);
		}
		i++;
	}
	return (NULL);
}
