/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felixrod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 03:19:16 by felixrod          #+#    #+#             */
/*   Updated: 2026/07/27 10:07:25 by felixrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);
void	ft_write(int *digits);


int	main(void)
{
	ft_print_comb2();
	return (0);
}


void	ft_write(int *digits)
{
	char	num_char;

	num_char = (digits[0] / 10) + '0';
	write(1, &num_char, 1);
	num_char = (digits[0] % 10) + '0';
	write(1, &num_char, 1);
	write(1, " ", 1);
	num_char = (digits[1] / 10) + '0';
	write(1, &num_char, 1);
	num_char = (digits[1] % 10) + '0';
	write(1, &num_char, 1);
	if (digits[0] != 98 || digits[1] != 99)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int		digits[2];

	digits[0] = 0;
	while (digits[0] <= 98)
	{
		digits[1] = digits[0] + 1;
		while (digits[1] <= 99)
		{
			ft_write(digits);
			digits[1]++;
		}
		digits[0]++;
	}
}
