/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayu0115 <mayu0115@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 17:34:35 by mayu0115          #+#    #+#             */
/*   Updated: 2024/11/01 19:40:14 by mayu0115         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	s_size;
	char	*d;

	s_size = ft_strlen(s);
	d = (char *)malloc(s_size * sizeof(char) + 1);
	if (d == NULL)
		return (0);
	ft_memcpy(d, s, s_size);
	d[s_size] = '\0';
	return (d);
}
