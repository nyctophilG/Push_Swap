/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gosahin <gosahin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 16:42:55 by gosahin           #+#    #+#             */
/*   Updated: 2024/10/26 19:04:07 by gosahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_iseq(char const s1, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (s1 == set[i])
		{
			return (0);
		}
		i++;
	}
	return (1);
}

static size_t	ft_head(char const *s1, char const *set)
{
	size_t	i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (ft_iseq(((char const *)s1)[i], set) == 1)
			break ;
		else
			i++;
	}
	return (i);
}

static size_t	ft_tail(char const *s1, char const *set)
{
	size_t	j;

	j = ft_strlen(s1);
	while (j > 0)
	{
		if (ft_iseq(((char const *)s1)[j - 1], set) == 1)
			break ;
		else
			j--;
	}
	return (j);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	t;
	char	*s;

	i = ft_head(s1, set);
	t = 0;
	j = ft_tail(s1, set);
	if (i >= j)
		return (ft_strdup(""));
	if (s1 == NULL || set == NULL)
		return (NULL);
	s = (char *)malloc(sizeof(char) * (j - i + 1));
	if (s == NULL)
	{
		return (NULL);
	}
	while (i < j)
	{
		s[t] = s1[i];
		i++;
		t++;
	}
	s[t] = '\0';
	return (s);
}
