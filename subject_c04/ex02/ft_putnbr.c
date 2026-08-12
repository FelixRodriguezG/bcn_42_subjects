/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felixrod <felixrod@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 16:40:58 by felixrod          #+#    #+#             */
/*   Updated: 2026/08/05 16:41:03 by felixrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

/**
 * Displays an integer passed as a parameter on the standard output.
 * Handles negative numbers, zero, and the minimum integer value (INT_MIN).
 *
 * @param nb The integer to be printed.
 */
void	ft_putnbr(int nb)
{
	char	char_number;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	char_number = (nb % 10) + '0';
	write(1, &char_number, 1);
}
/*
int	main(void)
{
	write(1, "=== EDGE CASES ===\n\n", 21);

	write(1, "Normal: ", 8);
	ft_putnbr(12345);
	write(1, "\n", 1);

	write(1, "Negative: ", 10);
	ft_putnbr(-12345);
	write(1, "\n", 1);

	write(1, "INT_MIN: ", 9);
	ft_putnbr(-2147483648);
	write(1, "\n", 1);

	write(1, "INT_MAX: ", 9);
	ft_putnbr(2147483647);
	write(1, "\n", 1);

	write(1, "ZERO: ", 6);
	ft_putnbr(0);
	write(1, "\n", 1);

	return (0);
}*/
