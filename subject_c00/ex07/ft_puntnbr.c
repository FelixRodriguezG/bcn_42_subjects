/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puntnbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felixrod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 02:49:43 by felixrod          #+#    #+#             */
/*   Updated: 2026/07/26 04:15:29 by felixrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_puntnbr(int nb);

int	main(void)
{
	ft_puntnbr(2147483647);
	return (0);
}

void	ft_puntnbr(int nb)
{
	char			char_number;
	insigned int	number;

	if (nb < 0)
	{
		write(1, "-", 1);
		number = -nb;
	}
	number = nb;
	if (number < 10)
	{
		char_number = (number + '0');
		write(1, &char_number, 1);
	}
	else
	{
		ft_puntnbr(number / 10);
		char_number = (number % 10) + '0';
		write(1, &char_number, 1);
	}
}
