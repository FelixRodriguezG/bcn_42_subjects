/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felixrod <felixrod@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 15:10:56 by felixrod          #+#    #+#             */
/*   Updated: 2026/08/06 15:11:01 by felixrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_isdigit(char c)
{
	if (!('0' <= c && c <= '9'))
		return (0);
	return (1);
}

int	ft_atoi(char *str)
{
	int	negative;
	int	number;

	negative = 1;
	number = 0;
	while ((9 <= *str && *str <= 13) || *str == ' ')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			negative = -1;
		else
			negative = 1;
		str++;
	}
	while (*str && ft_isdigit(*str))
	{
		number = (number * 10) + (*str - '0');
		str++;
	}
	return (number * negative);
}
/*
int	main(void)
{
	printf("test1 \" ---+--+1234ab567\" -> %d\n", ft_atoi(" ---+--+1234ab567"));
	printf("test2 \"  -1234ab567\" -> %d\n", ft_atoi("  -1234ab567"));
	printf("test3 \"  +1234ab567\" -> %d\n", ft_atoi("  +1234ab567"));
	return (0);
}*/
