/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_next_prime.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felixrod <felixrod@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 11:00:10 by felixrod          #+#    #+#             */
/*   Updated: 2026/08/13 11:44:07 by felixrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_is_prime(int nb)
{
	long long	i;

	if (nb < 2)
		return (0);
	i = 2;
	while (nb >= i * i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 0)
		return (2);
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}
/*
int	main(void)
{
	printf("el siguiente primo despues de 8 es %d", ft_find_next_prime(8));
	return (0);
}*/
