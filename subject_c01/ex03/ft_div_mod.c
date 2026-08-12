/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felixrod <felixrod@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 15:05:45 by felixrod          #+#    #+#             */
/*   Updated: 2026/08/03 15:15:19 by felixrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);
/*
int	main(void)
{
	int	div;
	int	mod;

	div = 0;
	mod = 0;
	ft_div_mod(30, 3, &div, &mod);
	printf("Division de a / b = %d/n", div);
	printf("Modulo de a %% b = %d/n", mod);

	return (0);
}
*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
