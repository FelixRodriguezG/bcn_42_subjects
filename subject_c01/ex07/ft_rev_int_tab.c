/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tu_login <felixrod@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 13:44:08 by tu_login          #+#    #+#             */
/*   Updated: 2026/08/03 15:18:56 by felixrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

/*
int	main()
{
	int i;
	int arr_nbrs[5] = {10, 29, 53, 12, 63};

	ft_rev_int_tab(arr_nbrs, 5);
	printf("Antes {10, 29, 53, 12, 63} ahora -> ");

	i = 0;
	while (arr_nbrs[i] != '\0')
	{
		printf("%d ", arr_nbrs[i]);
		i++;
	}

	return (0);
}
*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	left;
	int	right;
	int	temp;

	left = 0;
	right = size - 1;
	while (left <= right)
	{
		temp = tab[left];
		tab[left] = tab[right];
		tab[right] = temp;
		left++;
		right--;
	}
}
