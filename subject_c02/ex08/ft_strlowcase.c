/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felixrod <felixrod@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/31 09:20:40 by felixrod          #+#    #+#             */
/*   Updated: 2026/07/31 09:21:30 by felixrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

/**
 * Transforms every uppercase letter of a string into lowercase.
 * Modifies the string in-place and returns the pointer to it.
 *
 * @param str Pointer to the string to be converted to lowercase.
 * @return Pointer to the modified string.
 */
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}
/*
iint	main(void)
{
	char	str1[] = "HOLA";
	char	str2[] = "Hello World! 42";
	char	str3[] = "already lowercase";
	char	str4[] = "";
	char	*result;

	printf("=== Running tests for ft_strlowcase ===\n\n");

	// Test 1: Simple uppercase string
	result = ft_strlowcase(str1);
	printf("Test 1 [Simple uppercase \"HOLA\"]:\n");
	printf("  Expected : \"hola\"\n");
	printf("  Got      : \"%s\"\n", str1);
	printf("  
		Return pointer matches input: %s\n\n", (result == str1) ? "YES" : "NO");

	// Test 2: Mixed string with letters, numbers, and punctuation
	result = ft_strlowcase(str2);
	printf("Test 2 [Mixed \"Hello World! 42\"]:\n");
	printf("  Expected : \"hello world! 42\"\n");
	printf("  Got      : \"%s\"\n\n", str2);

	// Test 3: Already lowercase string
	result = ft_strlowcase(str3);
	printf("Test 3 [Already lowercase]:\n");
	printf("  Expected : \"already lowercase\"\n");
	printf("  Got      : \"%s\"\n\n", str3);

	// Test 4: Empty string
	result = ft_strlowcase(str4);
	printf("Test 4 [Empty string \"\"]:\n");
	printf("  Expected : \"\"\n");
	printf("  Got      : \"%s\"\n", str4);

	return (0);
}
*/
