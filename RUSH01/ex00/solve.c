/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besaipid <besaipid@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/01 21:17:36 by besaipid          #+#    #+#             */
/*   Updated: 2026/08/02 10:18:16 by besaipid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void	fill_1_4(int *ruler, int *grid)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		if (ruler[i] == 4)
		{
			grid[j] = 1;
			j++;
		}
		else if(ruler[i] == 1)
		{
			grid[j] = 4;
			j++;
		}
		i++;	
	}
	i = 12;
	while (i < 15)
	{
		if (ruler[i] == 4)
		{
			grid[j] = 1;
			j++;
		}
		else if(ruler[i] == 1)
		{
			grid[j] = 4;
			j++;
		}
		i++;		
	}
	i = 4;
	if (ruler[9] == 4)
		grid[4] = 1;
	else if (ruler[9] == 1)
		grid[4] = 4;

	if (ruler[13] == 4)
		grid[7] = 1;
	else if (ruler[13] == 1)
		grid[7] = 4;
	
	if (ruler[10] == 4)
		grid[8] = 1;
	else if (ruler[10] == 1)
		grid[8] = 4;

	if(ruler[14] == 4)
		grid[11] = 1;
	else if (ruler[14] == 1)
		grid[11] == 4;
		

}
void	ft_solve(int *ruler, int *grid)
{
	fill_1_4(ruler, grid);
}










