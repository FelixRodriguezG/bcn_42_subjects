/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felixrod <felixrod@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/09 10:25:10 by felixrod          #+#    #+#             */
/*   Updated: 2026/08/09 10:25:20 by felixrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	if (nb < 0)
		return (0);
	i = nb;
	result = 1;
	while (i > 0)
	{
		result *= i;
		i--;
	}
	return (result);
}
/*
int	main(void)
{
	printf("%d", ft_iterative_factorial(2));
	return (0);
}*/
