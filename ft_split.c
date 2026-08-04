/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayu0115 <mayu0115@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 12:44:17 by mayu0115          #+#    #+#             */
/*   Updated: 2024/11/14 11:55:35 by mayu0115         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static char	*malloc_word(const char *s, char c)
{
	int		len;
	char	*word;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	word = (char *)malloc(len + 1);
	if (!word)
		return (NULL);
	len = 0;
	while (s[len] && s[len] != c)
	{
		word[len] = s[len];
		len++;
	}
	word[len] = '\0';
	return (word);
}

static int	count_words(const char *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
		{
			in_word = 0;
		}
		s++;
	}
	return (count);
}

static void	free_words(char **words, int i)
{
	while (i >= 0)
	{
		free(words[i]);
		i--;
	}
	free(words);
}

char	**ft_allocate_and_split(const char *s, char c, int word_count)
{
	char	**res;
	int		i;

	res = (char **)malloc(sizeof(char *) * (word_count + 1));
	i = 0;
	if (!res)
		return (NULL);
	while (i < word_count)
	{
		while (*s == c)
			s++;
		res[i] = malloc_word(s, c);
		if (!res[i])
		{
			free_words(res, i - 1);
			return (NULL);
		}
		while (*s && *s != c)
			s++;
		i++;
	}
	res[word_count] = NULL;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	int	word_count;

	if (!s)
		return (NULL);
	word_count = count_words(s, c);
	return (ft_allocate_and_split(s, c, word_count));
}
