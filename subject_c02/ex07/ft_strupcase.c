/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tu_login <felixrod@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/31 02:17:10 by tu_login          #+#    #+#             */
/*   Updated: 2026/08/05 17:56:17 by felixrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

/**
 * Transforms every lowercase letter of a string into uppercase.
 * Modifies the string in-place and returns the pointer to it.
 *
 * @param str Pointer to the string to be converted to uppercase.
 * @return Pointer to the modified string.
 */
char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str1[] = "hola";
	char	str2[] = "Hello World! 42";
	char	str3[] = "ALREADY UPPERCASE";
	char	str4[] = "";
	char	*result;

	printf("=== Running tests for ft_strupcase ===\n\n");

	// Test 1: Simple lowercase string
	result = ft_strupcase(str1);
	printf("Test 1 [Simple lowercase \"hola\"]:\n");
	printf("  Expected : \"HOLA\"\n");
	printf("  Got      : \"%s\"\n", str1);
	printf("  
		Return pointer matches input: %s\n\n", (result == str1) ? "YES" : "NO");

	// Test 2: Mixed string with letters, numbers, and punctuation
	result = ft_strupcase(str2);
	printf("Test 2 [Mixed \"Hello World! 42\"]:\n");
	printf("  Expected : \"HELLO WORLD! 42\"\n");
	printf("  Got      : \"%s\"\n\n", str2);

	// Test 3: Already uppercase string
	result = ft_strupcase(str3);
	printf("Test 3 [Already uppercase]:\n");
	printf("  Expected : \"ALREADY UPPERCASE\"\n");
	printf("  Got      : \"%s\"\n\n", str3);

	// Test 4: Empty string
	result = ft_strupcase(str4);
	printf("Test 4 [Empty string \"\"]:\n");
	printf("  Expected : \"\"\n");
	printf("  Got      : \"%s\"\n", str4);

	return (0);
}
*/
