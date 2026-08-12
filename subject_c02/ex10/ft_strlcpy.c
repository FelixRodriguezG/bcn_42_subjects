/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felixrod <felixrod@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/31 12:15:08 by felixrod          #+#    #+#             */
/*   Updated: 2026/08/03 17:23:16 by felixrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

/**
 * Copies up to size - 1 characters from the NUL-terminated string src to dest,
 * NUL-terminating the result if size is not 0.
 *
 * @param dest Pointer to the destination buffer where content is copied.
 * @param src Pointer to the null-terminated source string.
 * @param size Total size of the destination buffer.
 * @return Total length of the string src (the length of string it tried to 
   create).
 */
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_len;

	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (size == 0)
		return (src_len);
	i = 0;
	while (src[i] != '\0' && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_len);
}
/*
int	main(void)
{
	char			dest[10];
	unsigned int	ret;

	printf("=== Running tests for ft_strlcpy ===\n\n");

	// Test 1: Normal copy with enough space
	for (int k = 0; k < 10; k++) dest[k] = 'X';
	ret = ft_strlcpy(dest, "hola", 10);
	printf("Test 1 [Normal copy (dest=10, src=\"hola\")]:\n");
	printf("  Expected dest   : \"hola\"\n");
	printf("  Got dest        : \"%s\"\n", dest);
	printf("  Expected return : 4\n");
	printf("  
		Got return      : %u | %s\n\n", ret, (ret == 4) ? "PASSED" : "FAILED");

	// Test 2: Truncation (buffer size too small)
	for (int k = 0; k < 10; k++) dest[k] = 'X';
	ret = ft_strlcpy(dest, "42Barcelona", 5);
	printf("Test 2 [Truncation (dest=5, src=\"42Barcelona\")]:\n");
	printf("  Expected dest   : \"42Ba\"\n");
	printf("  Got dest        : \"%s\"\n", dest);
	printf("  Expected return : 11 (full src length)\n");
	printf("  
		Got return      : %u | %s\n\n", ret, (ret == 11) ? "PASSED" : "FAILED");

	// Test 3: size = 0 (dest should not be modified)
	for (int k = 0; k < 10; k++) dest[k] = 'X';
	dest[9] = '\0';
	ret = ft_strlcpy(dest, "hello", 0);
	printf("Test 3 [size = 0]:\n");
	printf("  First char unaltered : '%c' (Expected: 'X')\n", dest[0]);
	printf("  Expected return      : 5\n");
	printf("  
		Got return        : %u | %s\n\n", ret, (ret == 5) ? "PASSED" : "FAILED");

	// Test 4: Copying an empty string
	for (int k = 0; k < 10; k++) dest[k] = 'X';
	ret = ft_strlcpy(dest, "", 5);
	printf("Test 4 [Empty src]:\n");
	printf("  Expected dest   : \"\"\n");
	printf("  Got dest        : \"%s\"\n", dest);
	printf("  Expected return : 0\n");
	printf("  
		Got return      : %u | %s\n", ret, (ret == 0) ? "PASSED" : "FAILED");

	return (0);
}
*/
