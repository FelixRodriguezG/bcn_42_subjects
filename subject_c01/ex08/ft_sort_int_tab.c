/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tu_login <felixrod@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 22:51:59 by tu_login          #+#    #+#             */
/*   Updated: 2026/08/03 15:19:19 by felixrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

/*
int	main()
{
	int	i;
	int	arr_nbrs[5] = {10, 29, 53, 12, 63};
	printf("Antes {10, 29, 53, 12, 63} ahora -> ");
	ft_sort_int_tab(arr_nbrs, 5);

	i = 0;
	while (i < 5)
	{
		printf("%d ", arr_nbrs[i]);
		i++;
	}

	return (0);
}
*/
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] < tab[j])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}
