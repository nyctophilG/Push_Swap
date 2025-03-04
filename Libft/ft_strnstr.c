/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gosahin <gosahin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 16:37:56 by gosahin           #+#    #+#             */
/*   Updated: 2024/10/26 14:53:44 by gosahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	s;
	size_t	d;

	d = ft_strlen(haystack);
	s = ft_strlen(needle);
	i = 0;
	if (s > d)
		return (NULL);
	if (ft_strlen(needle) == 0)
		return (((char *)haystack));
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while ((haystack[i + j] == needle[j]) && i + j < len)
		{
			j++;
			if (needle[j] == '\0')
				return (((char *)haystack) + i);
		}
		i++;
	}
	return (NULL);
}
