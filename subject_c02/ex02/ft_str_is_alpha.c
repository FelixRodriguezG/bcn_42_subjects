/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tu_login <felixrod@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/31 09:11:08 by tu_login          #+#    #+#             */
/*   Updated: 2026/08/05 17:36:08 by felixrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
/**
 * Checks if the given string contains only alphabetical characters (a-z, A-Z).
 * Returns 1 if the string is empty or contains only letters.
 * Returns 0 if any non-alphabetical character is found.
 *
 * @param str Pointer to the null-terminated string to check.
 * @return 1 if purely alphabetical or empty, 0 otherwise.
 */
int	ft_str_is_alpha(char *str)
{
	int		i;
	char	c;

	if (!str)
		return (1);
	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	int	result;

	printf("=== Running tests for ft_str_is_alpha ===\n\n");

	// Test 1: Standard uppercase and lowercase letters
	result = ft_str_is_alpha("HolaMundo");
	printf("Test 1 [Alphabetic \"HolaMundo\"]:\n");
	printf("  Expected : 1\n");
	printf("  
		Got      : %d | %s\n\n", result, (result == 1) ? "PASSED" : "FAILED");

	// Test 2: Symbols and special characters
	result = ft_str_is_alpha("++%$#@+++_';*++");
	printf("Test 2 [Symbols \"++%%$#@...\\\"]:\n");
	printf("  Expected : 0\n");
	printf("  
		Got      : %d | %s\n\n", result, (result == 0) ? "PASSED" : "FAILED");

	// Test 3: Empty string (Should return 1 according to 42 subject rules)
	result = ft_str_is_alpha("");
	printf("Test 3 [Empty string \"\"]:\n");
	printf("  Expected : 1\n");
	printf("  
		Got      : %d | %s\n\n", result, (result == 1) ? "PASSED" : "FAILED");

	// Test 4: String containing digits
	result = ft_str_is_alpha("Hello42");
	printf("Test 4 [Alphanumeric \"Hello42\"]:\n");
	printf("  Expected : 0\n");
	printf("  
		Got      : %d | %s\n\n", result, (result == 0) ? "PASSED" : "FAILED");

	// Test 5: String containing spaces
	result = ft_str_is_alpha("Hello World");
	printf("Test 5 [String with spaces \"Hello World\"]:\n");
	printf("  Expected : 0\n");
	printf("  
		Got      : %d | %s\n", result, (result == 0) ? "PASSED" : "FAILED");

	return (0);
}
*/
