/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tu_login <felixrod@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/31 00:39:46 by tu_login          #+#    #+#             */
/*   Updated: 2026/08/05 17:39:48 by felixrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int		i;
	char	c;

	if (!str)
		return (1);
	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (!(c >= 'a' && c <= 'z'))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	int	result;

	printf("=== Running tests for ft_str_is_lowercase ===\n\n");

	// Test 1: Only lowercase letters
	result = ft_str_is_lowercase("hola");
	printf("Test 1 [Lowercase string \"hola\"]:\n");
	printf("  Expected : 1\n");
	printf("  
		Got      : %d | %s\n\n", result, (result == 1) ? "PASSED" : "FAILED");

	// Test 2: String with uppercase letters
	result = ft_str_is_lowercase("HolA");
	printf("Test 2 [Mixed case string \"HolA\"]:\n");
	printf("  Expected : 0\n");
	printf("  
		Got      : %d | %s\n\n", result, (result == 0) ? "PASSED" : "FAILED");

	// Test 3: Empty string (Should return 1 according to 42 subject rules)
	result = ft_str_is_lowercase("");
	printf("Test 3 [Empty string \"\"]:\n");
	printf("  Expected : 1\n");
	printf("  
		Got      : %d | %s\n\n", result, (result == 1) ? "PASSED" : "FAILED");

	// Test 4: String with numbers
	result = ft_str_is_lowercase("hola42");
	printf("Test 4 [String with numbers \"hola42\"]:\n");
	printf("  Expected : 0\n");
	printf("  
		Got      : %d | %s\n\n", result, (result == 0) ? "PASSED" : "FAILED");

	// Test 5: String with spaces
	result = ft_str_is_lowercase("hello world");
	printf("Test 5 [String with spaces \"hello world\"]:\n");
	printf("  Expected : 0\n");
	printf("  
		Got      : %d | %s\n", result, (result == 0) ? "PASSED" : "FAILED");

	return (0);
}
*/
