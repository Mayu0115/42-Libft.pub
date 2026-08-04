/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayu0115 <mayu0115@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 12:32:09 by mayu0115          #+#    #+#             */
/*   Updated: 2024/11/01 19:30:34 by mayu0115         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0'
			&& c <= '9'))
		return (1);
	return (0);
}
// #include <stdio.h>

// int	main(void)
// {
// 	int test1 = 'A';
// 	int test2 = 'j';
// 	int test3 = '5';
// 	int test4 = '@';

// 	printf("%c ft_isalnum: %d\n ", test1, ft_isalnum(test1));
// 	printf("%c ft_isalnum: %d\n ", test2, ft_isalnum(test2));
// 	printf("%c ft_isalnum: %d\n ", test3, ft_isalnum(test3));
// 	printf("%c ft_isalnum: %d\n ", test4, ft_isalnum(test4));

// 	return (0);
// }