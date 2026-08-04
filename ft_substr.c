/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayu0115 <mayu0115@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 11:43:28 by mayu0115          #+#    #+#             */
/*   Updated: 2024/11/18 11:32:33 by mayu0115         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

const char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;

	i = 0;
	if (dst == NULL || src == NULL)
		return (NULL);
	while (i < len && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	while (i < len)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	len_of_s;
	size_t	actual_len;
	char	*sub;

	if (s == NULL)
		return (NULL);
	len_of_s = ft_strlen(s);
	if (start >= len_of_s)
	{
		return (ft_strdup(""));
	}
	actual_len = len;
	if (start + len > len_of_s)
	{
		actual_len = len_of_s - start;
	}
	sub = (char *)malloc(actual_len + 1);
	if (sub == NULL)
	{
		return (NULL);
	}
	ft_strncpy(sub, s + start, actual_len);
	sub[actual_len] = '\0';
	return (sub);
}
