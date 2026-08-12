/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felixrod <felixrod@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 15:41:45 by felixrod          #+#    #+#             */
/*   Updated: 2026/08/10 15:52:12 by felixrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	diff;
	int	*range;
	int start;
	int	i;

	if (min >= max)
		return (NULL);
	diff = max - min;
	range = (int *)malloc(sizeof(int) * diff);
	if (!range)
		return (NULL);
	i = 0;

	while (i < diff)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}

int	main(void)
{
	int	*result;
	int	i;

	result = ft_range(3, 7);
	if (result)
	{
		i = 0;
		while (i < 4)  
		{
			printf("%d ", result[i]);
			i++;
		}
		printf("\n");
		free(result);
	}
	return (0);
}
