/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felixrod <felixrod@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 17:04:20 by felixrod          #+#    #+#             */
/*   Updated: 2026/08/10 17:04:26 by felixrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	diff;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	diff = (max - min) + 1;
	*range = (int *)malloc(sizeof(int) * diff);
	if (!*range)
		return (-1);
	i = 0;
	while (i < diff)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (diff);
}

int	main(void)
{
	int	*result;
	int	i;
	int size;
	
	result = NULL;
	size = ft_ultimate_range(&result, 3, 7);
	printf("Tamaño devuelto: %d\n", size);
	if (result)
	{
		i = 0;
		while (i < size)  
		{
			printf("%d ", result[i]);
			i++;
		}
		printf("\n");
		free(result);
	}
	return (0);
}
