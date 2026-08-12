/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tu_login <felixrod@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/31 01:33:07 by tu_login          #+#    #+#             */
/*   Updated: 2026/08/05 17:46:53 by felixrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

/**
 * Checks if the given string contains only uppercase alphabetical characters 
  ('A' to 'Z').
 * Returns 1 if the string is empty or contains only uppercase letters.
 * Returns 0 if any character outside the range ['A', 'Z'] is found.
 *
 * @param str Pointer to the null-terminated string to check.
 * @return 1 if purely uppercase or empty, 0 otherwise.
 */
int	ft_str_is_uppercase(char *str)
{
	int		i;
	char	c;

	if (!str)
		return (1);
	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (!(c >= 'A' && c <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	int	result;

	printf("=== Running tests for ft_str_is_uppercase ===\n\n");

	// Test 1: Only uppercase letters
	result = ft_str_is_uppercase("HOLA");
	printf("Test 1 [Uppercase string \"HOLA\"]:\n");
	printf("  Expected : 1\n");
	printf("  
		Got      : %d | %s\n\n", result, (result == 1) ? "PASSED" : "FAILED");

	// Test 2: Mixed case string
	result = ft_str_is_uppercase("HolA");
	printf("Test 2 [Mixed case string \"HolA\"]:\n");
	printf("  Expected : 0\n");
	printf("  
		Got      : %d | %s\n\n", result, (result == 0) ? "PASSED" : "FAILED");

	// Test 3: Empty string (Should return 1 according to 42 subject rules)
	result = ft_str_is_uppercase("");
	printf("Test 3 [Empty string \"\"]:\n");
	printf("  Expected : 1\n");
	printf("  
		Got      : %d | %s\n\n", result, (result == 1) ? "PASSED" : "FAILED");

	// Test 4: Uppercase with numbers
	result = ft_str_is_uppercase("HOLA42");
	printf("Test 4 [Uppercase with numbers \"HOLA42\"]:\n");
	printf("  Expected : 0\n");
	printf("  
		Got      : %d | %s\n\n", result, (result == 0) ? "PASSED" : "FAILED");

	// Test 5: Uppercase with spaces
	result = ft_str_is_uppercase("HELLO WORLD");
	printf("Test 5 [Uppercase with spaces \"HELLO WORLD\"]:\n");
	printf("  Expected : 0\n");
	printf("  
		Got      : %d | %s\n", result, (result == 0) ? "PASSED" : "FAILED");

	return (0);
}
*/
