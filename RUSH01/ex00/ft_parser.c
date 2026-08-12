/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besaipid <besaipid@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/01 20:26:32 by besaipid          #+#    #+#             */
/*   Updated: 2026/08/01 21:15:51 by besaipid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	is_numeric(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

void	ft_parser(char *argv, int *ruler)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (argv[i] != '\0')
	{
		if (is_numeric(argv[i]))
		{
			ruler[j] = argv[i] - '0';
			j++;
		}
		i++;
	}
}
