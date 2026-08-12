/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felixrod <felixrod@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 15:04:29 by felixrod          #+#    #+#             */
/*   Updated: 2026/08/03 15:04:39 by felixrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);
/*
int main(void)
{
	int var1;
	int var2;

	var1 = 1;
	var2 = 2;
	printf("Antes del swap: var1 = %d, var2 = %d\n", var1, var2);
	ft_swap(&var1, &var2);
	printf("Despues del swap: var1 = %d, var2 = %d\n", var1, var2);
	return (0);
}
*/

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
