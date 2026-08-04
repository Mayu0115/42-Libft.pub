/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayu0115 <mayu0115@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 10:35:29 by mayu0115          #+#    #+#             */
/*   Updated: 2024/11/18 09:12:01 by mayu0115         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_atoi_preprocess(const char **nptr)
{
	int	sign;

	sign = 1;
	while ((**nptr >= 9 && **nptr <= 13) || **nptr == ' ')
		(*nptr)++;
	if (**nptr == '-')
	{
		sign = -1;
		(*nptr)++;
	}
	else if (**nptr == '+')
		(*nptr)++;
	return (sign);
}

static long	ft_atoi_convert(const char *nptr, int sign)
{
	long	result;

	result = 0;
	while (*nptr >= '0' && *nptr <= '9')
	{
		if (result > LONG_MAX / 10 || (result == LONG_MAX / 10 && (*nptr
					- '0') > LONG_MAX % 10))
		{
			if (sign == 1)
				return (LONG_MAX);
			else
				return (LONG_MIN);
		}
		result = result * 10 + (*nptr - '0');
		nptr++;
	}
	return (result * sign);
}

int	ft_atoi(const char *nptr)
{
	int	sign;

	sign = ft_atoi_preprocess(&nptr);
	return (ft_atoi_convert(nptr, sign));
}
