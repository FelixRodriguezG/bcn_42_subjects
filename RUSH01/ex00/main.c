/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felixrod <felixrod@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/01 11:47:31 by felixrod          #+#    #+#             */
/*   Updated: 2026/08/02 09:49:14 by besaipid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int		ft_is_valid_args(int argc, char *argv[]);
void	ft_parser(char *argv, int *ruler);
<<<<<<< Updated upstream
void    ft_solve(int *ruler, int *grid);
=======
void    ft_solve(int *ruler);
void	ft_print_solve(int *str);
>>>>>>> Stashed changes

int	main(int argc, char *argv[])
{
	int	*ruler;
	int	*grid;
	if (!ft_is_valid_args(argc, argv))
	{
		write (2, "Error\n", 6);
		return (1);
	}
	printf("argv in chars%s\n", argv[1]);
/* temporal message*/
	printf("%s\n", "Given vlue is valid!");
/* Malloc is here*/

	ruler = malloc(sizeof(int) * 16);
	if (ruler == NULL)
	{
		write(2, "Error in reserving memory\n", 26);
		return (1);
	}
/* Test to print*/
	ft_print_solve(ruler);
	
/* this message is temporal */
	printf("sizeof ruler reserved by malloc: %lu\n", sizeof(ruler));
	ft_parser(argv[1], ruler);

/*this is test of the ruler, if the args are parsed correctly*/
	printf("%s\n", "Parsed rule");
	for (int i = 0; i < 16 ; i++)
		printf("%d ", ruler[i]);
/*This is main function to solve */
	/* Calloc should be recreated*/
	grid = calloc(sizeof(int) * 16);
	ft_solve(ruler, grid);

/*this has to bee in the end of the program for free the memory allocated by malloc*/
/* Or better we create one function ft_cleaner wich frees grid and ruler*/
	free(ruler);

	return (0);
}
