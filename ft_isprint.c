/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayu0115 <mayu0115@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 12:48:08 by mayu0115          #+#    #+#             */
/*   Updated: 2024/11/01 19:31:01 by mayu0115         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c < 32 || c > 126)
		return (0);
	return (1);
}
// #include <stdio.h>

// int	main(void)
// {
// 	int test1 = 'A';
// 	int test2 = '\x01';
// 	int test3 = '5';
// 	int test4 = '@';

// 	printf("%c ft_isprint: %d\n ", test1, ft_isprint(test1));
// 	printf("%c ft_isprint: %d\n ", test2, ft_isprint(test2));
// 	printf("%c ft_isprint: %d\n ", test3, ft_isprint(test3));
// 	printf("%c ft_isprint: %d\n ", test4, ft_isprint(test4));

// 	return (0);
// }