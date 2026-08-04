/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayu0115 <mayu0115@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 19:31:22 by mayu0115          #+#    #+#             */
/*   Updated: 2024/11/14 13:00:30 by mayu0115         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*byte_ptr;
	unsigned char		target;

	byte_ptr = (const unsigned char *)s;
	target = (unsigned char)c;
	while (n--)
	{
		if (*byte_ptr == target)
			return ((void *)byte_ptr);
		byte_ptr++;
	}
	return (NULL);
}
