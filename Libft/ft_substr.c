/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gosahin <gosahin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 12:04:21 by gosahin           #+#    #+#             */
/*   Updated: 2024/10/29 16:58:15 by gosahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*r;

	i = 0;
	if (start >= ft_strlen(s))
	{
		return ((char *)ft_calloc(1, sizeof(char)));
	}
	if (len > ft_strlen(s + start))
	{
		len = ft_strlen(s + start);
	}
	r = (char *)malloc(len + 1);
	if (r == NULL)
	{
		return (NULL);
	}
	while (i < len)
	{
		r[i] = s[start];
		start++;
		i++;
	}
	r[i] = '\0';
	return (r);
}
