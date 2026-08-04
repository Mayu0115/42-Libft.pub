/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayu0115 <mayu0115@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 18:54:39 by mayu0115          #+#    #+#             */
/*   Updated: 2024/11/01 19:40:25 by mayu0115         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*total;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	total = (char *)malloc(s1_len + s2_len + 1);
	if (!total)
		return (NULL);
	ft_memcpy(total, s1, s1_len);
	ft_memcpy(total + s1_len, s2, s2_len);
	total[s1_len + s2_len] = '\0';
	return (total);
}
