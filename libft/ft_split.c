/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyazid-r <cyazid-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 12:13:57 by cyazid-r          #+#    #+#             */
/*   Updated: 2023/04/03 04:16:39 by cyazid-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	char_is_sept(char c, char sep)
{
	int	a;

	a = 0;
	if (c == sep || c == '\0')
		return (1);
	return (0);
}

static int	count_words(char *str, char sep)
{
	int	a;
	int	words;

	words = 0;
	a = 0;
	while (str[a] != '\0')
	{
		if (char_is_sept(str[a + 1], sep) == 1
			&& char_is_sept(str[a], sep) == 0)
			words++;
		a++;
	}
	return (words);
}

static void	wirte_word(char *dst, char *from, char sep)
{
	int	a;

	a = 0;
	while (char_is_sept(from[a], sep) == 0)
	{
		dst[a] = from[a];
		a++;
	}
	dst[a] = '\0';
}

static void	*wirte_spilt(char **split, char *str, char sep)
{
	int	a;
	int	b;
	int	word;

	word = 0;
	a = 0;
	while (str[a] != '\0')
		if (char_is_sept(str[a], sep) == 1)
			a++;
	else
	{
		b = 0;
		while (char_is_sept (str[a + b], sep) == 0)
			b++;
		split[word] = (char *)malloc(sizeof(char) * (b + 1));
		wirte_word (split[word], str + a, sep);
		a += b;
		word++;
	}
	return ((void *)1);
}

char	**ft_split(char const *s, char c)
{
	char	**rs;
	char	*str;
	int		word;

	if (s == NULL)
		return (NULL);
	str = (char *)s;
	word = count_words(str, c);
	rs = (char **)malloc(sizeof(char *) * (word + 1));
	if (!rs)
		return (NULL);
	rs[word] = 0;
	if (wirte_spilt(rs, str, c) == NULL)
		return (NULL);
	return (rs);
}
