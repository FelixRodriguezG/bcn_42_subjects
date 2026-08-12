/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felixrod <felixrod@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/02 09:47:53 by felixrod          #+#    #+#             */
/*   Updated: 2026/08/02 09:47:58 by felixrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_solve(int *tab)
{
	int		i;
	int		j;
	char	c;
	
	i = 0;
	while(i < 16)
	{
		j = 0;
		while(j < 4)
		{
			c = tab[i + j] + '0';
			write(1, &c, 1);
			
			// Solo imprime un espacio si no estas en el ultimo numero del cuarteto.
			if ( j < 3)
				write(1, " ", 1);
			j++;
			
		}
		write(1, "\n", 1);
		i += 4 ;
	}
}
