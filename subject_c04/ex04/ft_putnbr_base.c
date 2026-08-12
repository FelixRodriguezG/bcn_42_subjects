/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felixrod <felixrod@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 16:45:03 by felixrod          #+#    #+#             */
/*   Updated: 2026/08/05 16:45:06 by felixrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_defbase(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

void	ft_puntnbr_base(int nbr, char *base)
{
	char			char_number;
	unsigned int	unsigned_nbr;
	unsigned int	count_base;

	count_base = ft_defbase(base);
	if (nbr < 0)
	{
		write(1, "-", 1);
		unsigned_nbr = -nbr;
	}
	else
		unsigned_nbr = nbr;
	if (unsigned_nbr >= count_base)
		ft_puntnbr_base(unsigned_nbr / count_base, base);
	char_number = (base[unsigned_nbr % count_base]);
	write(1, &char_number, 1);
}
/*
int	main(void)
{
	write(1, "=== EDGE CASES ===\n", 19);
	write(1, "Hexadecimal Base: ", 18);
	write(1, "\n", 1);
	ft_puntnbr_base(3423, "0123456789abcdef");
	write(1, "\n", 1);
	ft_puntnbr_base(3423, "0123456789abcdef");
	write(1, "\n", 1);
	write(1, "\nOctal Base: ", 13);
	write(1, "\n", 1);
	ft_puntnbr_base(43, "01234567");
	write(1, "\n", 1);
	ft_puntnbr_base(323, "abcdefgh");
	write(1, "\n", 1);
	write(1, "\nBinary Base: ", 14);
	write(1, "\n", 1);
	ft_puntnbr_base(11, "01");
	write(1, "\n", 1);
	ft_puntnbr_base(47, "01");
	return (0);
}*/
