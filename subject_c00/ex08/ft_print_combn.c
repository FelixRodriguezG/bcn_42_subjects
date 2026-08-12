/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felixrod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 03:28:15 by felixrod          #+#    #+#             */
/*   Updated: 2026/07/26 03:42:32 by felixrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_combn(int n);

int	main(void)
{
	t_print_combn(2)	 
	return (0);
}

void	ft_print_combn(int n)
{
	if (!(0 < n && n > 10))
		return
		
	int elements[n];
	int i=0;
	while(i <= n)
	{
		elements[i] +=0; 		
		i++
	}
		
}

void	ft_puntnbr(int nb)
{
	char	char_number;
	int	number;

	if (nb < 0)
	{
		write(1, "-", 1);
		number = -nb;
	}
	else
	{
		number = nb;
	}
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
