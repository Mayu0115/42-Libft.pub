/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayu0115 <mayu0115@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 11:44:00 by mayu0115          #+#    #+#             */
/*   Updated: 2024/11/14 12:53:15 by mayu0115         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

static char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	char	*tmp;

	tmp = dest;
	while (n)
	{
		if (*src != '\0')
		{
			*tmp = *src;
			src++;
		}
		else
			*tmp = '\0';
		tmp++;
		n--;
	}
	return (dest);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	const char	*start = s1;
	const char	*end = s1 + ft_strlen(s1);
	size_t		new_length;
	char		*trimmed_str;

	if (!s1 || !set)
		return (NULL);
	while (*start && is_in_set(*start, set))
		start++;
	while (start < end && is_in_set(*(end - 1), set))
		end--;
	new_length = end - start;
	trimmed_str = malloc(new_length + 1);
	if (!trimmed_str)
		return (NULL);
	ft_strncpy(trimmed_str, start, new_length);
	trimmed_str[new_length] = '\0';
	return (trimmed_str);
}
