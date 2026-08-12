/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tu_login <felixrod@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/31 00:32:46 by tu_login          #+#    #+#             */
/*   Updated: 2026/08/05 17:37:35 by felixrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
/**
 * Checks if the given string contains only numeric characters ('0' to '9').
 * Returns 1 if the string is empty or contains only digits.
 * Returns 0 if any non-numeric character is found.
 *
 * @param str Pointer to the null-terminated string to check.
 * @return 1 if purely numeric or empty, 0 otherwise.
 */
int	ft_str_is_numeric(char *str)
{
	int		i;
	char	c;

	if (!str)
		return (1);
	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (!(c >= '0' && c <= '9'))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	int	result;

	printf("=== Running tests for ft_str_is_numeric ===\n\n");

	// Test 1: Only digits
	result = ft_str_is_numeric("1235678");
	printf("Test 1 [Numeric string \"1235678\"]:\n");
	printf("  Expected : 1\n");
	printf("  
		Got      : %d | %s\n\n", result, (result == 1) ? "PASSED" : "FAILED");

	// Test 2: Only letters
	result = ft_str_is_numeric("hola");
	printf("Test 2 [Alphabetic string \"hola\"]:\n");
	printf("  Expected : 0\n");
	printf("  
		Got      : %d | %s\n\n", result, (result == 0) ? "PASSED" : "FAILED");

	// Test 3: Empty string (Should return 1 according to 42 subject rules)
	result = ft_str_is_numeric("");
	printf("Test 3 [Empty string \"\"]:\n");
	printf("  Expected : 1\n");
	printf("  
		Got      : %d | %s\n\n", result, (result == 1) ? "PASSED" : "FAILED");

	// Test 4: Mixed alphanumeric string
	result = ft_str_is_numeric("123abc456");
	printf("Test 4 [Alphanumeric string \"123abc456\"]:\n");
	printf("  Expected : 0\n");
	printf("  
		Got      : %d | %s\n\n", result, (result == 0) ? "PASSED" : "FAILED");

	// Test 5: Digits with spaces or signs
	result = ft_str_is_numeric("+123");
	printf("Test 5 [Signed number \"+123\"]:\n");
	printf("  Expected : 0\n");
	printf("  
		Got      : %d | %s\n", result, (result == 0) ? "PASSED" : "FAILED");

	return (0);
}
*/
