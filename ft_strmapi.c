/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayu0115 <mayu0115@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 15:13:08 by mayu0115          #+#    #+#             */
/*   Updated: 2024/11/08 21:19:51 by mayu0115         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			length;
	char			*result;
	unsigned int	i;

	if (!s || !f)
	{
		return (NULL);
	}
	i = 0;
	length = ft_strlen(s);
	result = (char *)malloc(length + 1);
	if (!result)
	{
		return (NULL);
	}
	while (i < length)
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[length] = '\0';
	return (result);
}
