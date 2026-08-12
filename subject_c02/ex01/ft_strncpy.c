/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tu_login <felixrod@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 22:45:12 by tu_login          #+#    #+#             */
/*   Updated: 2026/08/05 17:26:48 by felixrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
nt	main(void)
{
	char	dest[10];
	char	*res;

	printf("=== Running tests for ft_strncpy ===\n\n");

	// Test 1: n is smaller than src length (Copies partial string, no null 
	terminator added within n)
	// Filling dest with 'X' to check exact boundary
	for (int k = 0; k < 10; k++) dest[k] = 'X';
	res = ft_strncpy(dest, "42Barcelona", 4);
	printf("Test 1 [n < src len (n=4)]:\n");
	printf("  Expected dest[0..3] : \"42Ba\"\n");
	printf("  Got dest[0..3]      : \"%.4s\"\n", dest);
	printf("  Checking rest of buffer (should be 'X'): 
		dest[4] = '%c'\n\n", dest[4]);

	// Test 2: n is larger than src length (Pads remainder with '\0')
	for (int k = 0; k < 10; k++) dest[k] = 'X';
	res = ft_strncpy(dest, "hola", 8);
	printf("Test 2 [n > src len (n=8)]:\n");
	printf("  Expected string : \"hola\"\n");
	printf("  Got string      : \"%s\"\n", dest);
	printf("  
		Checking null-padding at dest[5]: %d (Expected: 0)\n", dest[5]);
	printf("  
		Checking buffer limit at dest[8]: '%c' (Expected: 'X')\n\n", dest[8]);

	// Test 3: n is equal to 0 (Should not modify dest)
	for (int k = 0; k < 10; k++) dest[k] = 'X';
	res = ft_strncpy(dest, "hola", 0);
	printf("Test 3 [n = 0]:\n");
	printf("  
		First char unaltered: '%c' (Expected: 'X')\n\n", dest[0]);

	// Test 4: Return pointer check
	printf("Test 4 [Return Pointer]:\n");
	printf("  
		Matches dest: %s\n", (res == dest) ? "YES" : "NO");

	return (0);
}
*/
