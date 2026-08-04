/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayu0115 <mayu0115@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 19:31:09 by mayu0115          #+#    #+#             */
/*   Updated: 2024/11/14 19:31:54 by mayu0115         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_length(int n)
{
	int	length;

	length = 0;
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		length = 1;
	}
	while (n != 0)
	{
		n = n / 10;
		length++;
	}
	return (length);
}

static int	handle_negative(int *n, char *str)
{
	if (*n == INT_MIN)
	{
		str[0] = '-';
		str[1] = '2';
		*n = 147483648;
		return (2);
	}
	else if (*n < 0)
	{
		str[0] = '-';
		*n = -*n;
		return (1);
	}
	return (0);
}

static void	convert_to_str(int n, char *str, int length)
{
	int	digit;

	str[length] = '\0';
	while (n > 0)
	{
		digit = n % 10;
		str[--length] = digit + '0';
		n /= 10;
	}
}

char	*ft_itoa(int n)
{
	int		length;
	char	*str;

	length = get_length(n);
	str = malloc(length + 1);
	if (!str)
		return (NULL);
	handle_negative(&n, str);
	if (n == 0)
	{
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	convert_to_str(n, str, length);
	return (str);
}
