/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayu0115 <mayu0115@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 11:48:15 by mayu0115          #+#    #+#             */
/*   Updated: 2024/11/01 19:30:41 by mayu0115         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int test1 = 'A';
// 	int test2 = '\0';
// 	int test3 = '5';
// 	int test4 = '@';

// 	printf("%c ft_isalpha: %d\n ", test1, ft_isalpha(test1));
// 	printf("%c ft_isalpha: %d\n ", test2, ft_isalpha(test2));
// 	printf("%c ft_isalpha: %d\n ", test3, ft_isalpha(test3));
// 	printf("%c ft_isalpha: %d\n ", test4, ft_isalpha(test4));

// 	return (0);
// }