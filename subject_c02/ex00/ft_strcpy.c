/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tu_login <felixrod@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 22:26:08 by tu_login          #+#    #+#             */
/*   Updated: 2026/08/05 17:28:03 by felixrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/**
 * Copies the string pointed to by src, including the terminating 
 * null byte ('\0'), to the buffer pointed to by dest.
 *
 * @param dest Pointer to the destination array where the content is to be 
   copied.
 * @param src Pointer to the null-terminated string to be copied.
 * @return Pointer to the destination string (dest).
 */
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	dest1[50];
	char	dest2[50];
	char	dest3[50];
	char	*result;

	printf("=== Running tests for ft_strcpy ===\n\n");

	// Test 1: Standard string
	result = ft_strcpy(dest1, "hola");
	printf("Test 1 [Standard String]:\n");
	printf("  Expected : \"hola\"\n");
	printf("  Got      : \"%s\"\n", dest1);
	printf("  Return ptr matches dest: %s\n\n", 
		result == dest1) ? "YES" : "NO");

	// Test 2: Empty string
	result = ft_strcpy(dest2, "");
	printf("Test 2 [Empty String]:\n");
	printf("  Expected : \"\"\n");
	printf("  Got      : \"%s\"\n", dest2);
	printf("  Return ptr matches dest: %s\n\n", 
		(result == dest2) ? "YES" : "NO");

	// Test 3: String with spaces and special characters
	result = ft_strcpy(dest3, "Hello, World! 123");
	printf("Test 3 [Complex String]:\n");
	printf("  Expected : \"Hello, World! 123\"\n");
	printf("  Got      : \"%s\"\n", dest3);
	printf("  Return ptr matches dest: %s\n", 
		(result == dest3) ? "YES" : "NO");

	return (0);
}
*/
