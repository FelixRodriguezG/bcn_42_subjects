/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felixrod <felixrod@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 16:45:55 by felixrod          #+#    #+#             */
/*   Updated: 2026/08/05 16:45:58 by felixrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

unsigned int	ft_defbase(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

int	ft_get_value(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	find_duplicate(char *base)
{
	char	*p1;
	char	*p2;

	if (!base)
		return (0);
	p1 = base;
	while (*p1 != '\0')
	{
		p2 = p1 + 1;
		while (*p2 != '\0')
		{
			if (*p1 == *p2)
				return (1);
			p2++;
		}
		p1++;
	}
	return (0);
}

int	isvalid_base(char *base)
{
	if (!base || !base[0] || !base[1])
		return (0);
	if (find_duplicate(base))
		return (0);
	while (*base)
	{
		if (*base == '+' || *base == '-')
			return (0);
		base++;
	}
	return (1);
}

int	ft_atoi_base(char *str, char *base)
{
	int				negative;
	int				number;
	unsigned int	count_base;

	negative = 1;
	number = 0;
	if (!isvalid_base(base))
		return (0);
	count_base = ft_defbase(base);
	while ((9 <= *str && *str <= 13) || *str == ' ')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			negative *= -1;
		str++;
	}
	while (ft_get_value(*str, base) != -1)
	{
		number = (number * count_base) + ft_get_value(*str, base);
		str++;
	}
	return (number * negative);
}
/*
int	main(void)
{
	printf("\n========= BASE 10 =========\n");
	printf(">>> \"123\" ---------> %d\n", ft_atoi_base("123", "0123456789"));
	printf(">>> \"-123\" --------> %d\n", ft_atoi_base("-123", "0123456789"));
	printf(">>> \"   123\" ------> %d\n", ft_atoi_base("   123", "0123456789"));

	printf("\n========= BASE 2 =========\n");
	printf(">>> \"101\" ---------> %d\n", ft_atoi_base("101", "01"));
	printf(">>> \"1010\" --------> %d\n", ft_atoi_base("1010", "01"));
	printf(">>> \"-101\" --------> %d\n", ft_atoi_base("-101", "01"));

	printf("\n========= BASE 16 =========\n");
	printf(">>> \"2A\"-----------> %d\n",
		ft_atoi_base("2A", "0123456789ABCDEF"));
	printf(">>> \"FF\" ----------> %d\n",
		ft_atoi_base("FF", "0123456789ABCDEF"));

	printf("\n========= CARACTERES INVALIDOS =========\n");
	printf(">>> \"123abc\" ------> %d\n",
		ft_atoi_base("123abc", "0123456789"));
	printf(">>> \"12X34\" -------> %d\n",
		ft_atoi_base("12X34", "0123456789"));

	printf("\n========= BASE INVALIDA =========\n");
	printf(">>> Duplicada -----> %d\n",
		ft_atoi_base("123", "0123456788"));
	printf(">>> Con '+' -------> %d\n",
		ft_atoi_base("123", "0123456789+"));
	printf(">>> Con '-' -------> %d\n",
		ft_atoi_base("123", "0123456789-"));
	printf(">>> Muy corta -----> %d\n",
		ft_atoi_base("123", "1"));
	return (0);
}
*/
