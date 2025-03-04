/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gosahin <gosahin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 18:13:38 by gosahin           #+#    #+#             */
/*   Updated: 2024/10/26 20:35:18 by gosahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_free(char **s1, size_t word)
{
	while (word > 0)
	{
		word--;
		free(s1[word]);
	}
	free(s1);
	return (0);
}

static char	*ft_put_words(char const *s, char *s1, size_t i, size_t len)
{
	size_t	j;

	j = 0;
	while (len != 0)
	{
		s1[j] = s[i - len];
		j++;
		len--;
	}
	s1[j] = '\0';
	return (s1);
}

static char	**ft_sperate(char const *s, char **s1, char c, size_t numword)
{
	size_t	i;
	size_t	len;
	size_t	word;

	i = 0;
	len = 0;
	word = 0;
	while (word < numword)
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		while (s[i] != c && s[i] != '\0')
		{
			i++;
			len++;
		}
		s1[word] = (char *)malloc(sizeof (char) * (len + 1));
		if (s1[word] == NULL)
			return (ft_free(s1, word));
		s1[word] = ft_put_words(s, s1[word], i, len);
		word++;
		len = 0;
	}
	s1[word] = NULL;
	return (s1);
}

static int	ft_numword(char const *s, char c)
{
	int		i;
	size_t	count;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
		{
			i++;
		}
		if (s[i] != c && s[i] != '\0')
		{
			while (s[i] != c && s[i] != '\0')
			{
				i++;
			}
			count++;
		}
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**s1;
	size_t	numword;

	numword = ft_numword(s, c);
	s1 = (char **)malloc(sizeof(char *) * (numword + 1));
	if (s1 == NULL)
	{
		return (NULL);
	}
	s1 = ft_sperate(s, s1, c, numword);
	return (s1);
}
