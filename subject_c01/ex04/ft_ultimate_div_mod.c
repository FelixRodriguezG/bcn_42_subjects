/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felixrod <felixrod@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 15:15:52 by felixrod          #+#    #+#             */
/*   Updated: 2026/08/03 15:16:01 by felixrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

/*
int	main(void)
{
	int	num1;
	int	num2;

	num1 = 10;
	num2 = 2;
	printf("valor de num1 antes del switch: %d\n", num1);
	printf("valor de num1 antes del switch: %d\n", num2);
	ft_ultimate_div_mod(&num1, &num2);
	printf("valor de num1 despues del switch: %d\n", num1);
	printf("valor de num1 despues del switch: %d\n", num2);
	return (0);
}
*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp_a;

	temp_a = *a;
	*a = temp_a / *b;
	*b = temp_a % *b;
}
