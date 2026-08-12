/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felixrod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 00:29:52 by felixrod          #+#    #+#             */
/*   Updated: 2026/07/24 03:17:54 by felixrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);

/*
int	main(void)
{
	ft_print_comb();
	return (0);
}
*/

void	ft_print_comb(void)
{
	char	digits[3];

	digits[0] = '0';
	while (digits[0] <= '7')
	{
		digits[1] = digits[0] + 1;
		while (digits[1] <= '8')
		{
			digits[2] = digits[1] + 1;
			while (digits[2] <= '9')
			{
				write(1, digits, 3);
				if (!(digits[0] == '7' && digits[1] == '8' && digits[2] == '9'))
					write(1, ", ", 2);
				digits[2]++;
			}
			digits[1]++;
		}
		digits[0]++;
	}
}
