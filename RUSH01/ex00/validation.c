/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felixrod <felixrod@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/01 17:51:24 by felixrod          #+#    #+#             */
/*   Updated: 2026/08/01 20:21:22 by besaipid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/* Function Prototypes */
int	ft_is_valid_args(int argc, char *argv[]);
int	ft_is_digit_valid(char c);
int	ft_count_characters(char *str);
int	ft_count_digits(char *str);

/**
 * @brief Validates the program's command-line arguments.
 *
 * Ensures that exactly one argument is passed (argc == 2), that the argument 
 * is not empty, contains only valid characters (digits '1'-'4' and spaces), 
 * and strictly matches the expected format length 
 * (31 total characters and 16 digits).

 * @param argc The total count of command-line arguments.
 * @param argv Array of strings containing the argument values.
 * @return int Returns 1 if all validation checks pass, 0 otherwise.
 */
int	ft_is_valid_args(int argc, char *argv[])
{
	int	i;

	if (argc != 2 || !argv[1])
		return (0);
	if (argv[1][0] == '\0')
		return (0);
	i = 0;
	while (argv[1][i] != '\0')
	{
		if (!ft_is_digit_valid(argv[1][i]))
			return (0);
		i++;
	}
	if (!ft_count_characters(argv[1]) || !ft_count_digits(argv[1]))
		return (0);
	return (1);
}
/**
 * @brief Checks whether a character is an allowed input.
 *
 * Evaluates if the given character is either a space (' ') or a numeric 
 * character between '1' and '4'.
 *
 * @param c The character to validate.
 * @return int Returns 1 if the character is valid, 0 otherwise.
 */

int	ft_is_digit_valid(char c)
{
	if (c == ' ' || (c >= '1' && c <= '4'))
		return (1);
	return (0);
}

/**
 * @brief Calculates the length of a string and checks if it matches 31.
 *
 * Computes the total number of characters in the string and compares it 
 * against the expected length for a 4x4 input string (16 numbers + 15 spaces).
 *
 * @param str Pointer to the null-terminated input string.
 * @return int Returns 1 if string length equals 31, 0 otherwise.
 */
int	ft_count_characters(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count == 31);
}

/**
 * @brief Counts the total numeric digits within a string.
 *
 * Iterates through the string to sum all characters representing digits 
 * from '1' to '4', ensuring there are exactly 16 values in total.
 *
 * @param str Pointer to the null-terminated input string.
 * @return int Returns 1 if the digit count is exactly 16, 0 otherwise.
 */
int	ft_count_digits(char *str)
{
	int	digits;
	int	i;

	digits = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '1' && str[i] <= '4')
			digits++;
		i++;
	}
	return (digits == 16);
}
