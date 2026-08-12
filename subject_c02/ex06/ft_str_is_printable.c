/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tu_login <felixrod@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/31 01:38:25 by tu_login          #+#    #+#             */
/*   Updated: 2026/08/05 17:54:04 by felixrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
/**
 * Checks if the given string contains only printable characters.
 * Printable ASCII characters range from space (32) to tilde (126).
 * Non-printable characters include control characters (0-31) and DELETE (127).
 *
 * @param str Pointer to the null-terminated string to check.
 * @return 1 if purely printable or empty, 0 otherwise.
 */
int	ft_str_is_printable(char *str)
{
	int		i;
	char	c;

	if (!str)
		return (1);
	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (c < 32 || c == 127)
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	int	result;

	printf("=== Running tests for ft_str_is_printable ===\n\n");

	// Test 1: Standard printable string
	result = ft_str_is_printable("HOLA 123 !@#");
	printf("Test 1 [Printable string \"HOLA 123 !@#\"]:\n");
	printf("  Expected : 1\n");
	printf("  
		Got      : %d | %s\n\n", result, (result == 1) ? "PASSED" : "FAILED");

	// Test 2: Non-printable control characters (\n, \t, \f)
	result = ft_str_is_printable("\n\t\f");
	printf("Test 2 [Control characters \"\\n\\t\\f\"]:\n");
	printf("  Expected : 0\n");
	printf("  
		Got      : %d | %s\n\n", result, (result == 0) ? "PASSED" : "FAILED");

	// Test 3: Empty string (Should return 1 according to 42 subject rules)
	result = ft_str_is_printable("");
	printf("Test 3 [Empty string \"\"]:\n");
	printf("  Expected : 1\n");
	printf("  
		Got      : %d | %s\n\n", result, (result == 1) ? "PASSED" : "FAILED");

	// Test 4: Boundary test (ASCII 127 / DEL)
	char non_print_del[2] = {127, '\0'};
	result = ft_str_is_printable(non_print_del);
	printf("Test 4 [ASCII 127 (DEL)]:\n");
	printf("  Expected : 0\n");
	printf("  
		Got      : %d | %s\n\n", result, (result == 0) ? "PASSED" : "FAILED");

	// Test 5: Boundary test (ASCII 32 / Space - should be printable)
	result = ft_str_is_printable("   ");
	printf("Test 5 [Spaces only \"   \"]:\n");
	printf("  Expected : 1\n");
	printf("  
		Got      : %d | %s\n", result, (result == 1) ? "PASSED" : "FAILED");

	return (0);
}
*/
