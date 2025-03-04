/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gosahin <gosahin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:03:53 by gosahin           #+#    #+#             */
/*   Updated: 2024/10/26 19:19:51 by gosahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	char	*r;
	size_t	i;

	if (s == NULL)
	{
		return (NULL);
	}
	r = (char *)malloc(ft_strlen(s) * sizeof(char) + 1);
	if (r == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < ft_strlen(s))
	{
		r[i] = f(i, s[i]);
		i++;
	}
	r[i] = '\0';
	return (r);
}
