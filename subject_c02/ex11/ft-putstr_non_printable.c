/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft-putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felixrod <felixrod@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 14:07:38 by felixrod          #+#    #+#             */
/*   Updated: 2026/08/03 14:29:06 by felixrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

/**
 * Displays a string on the standard output. If a character is non-printable,
 * it is displayed in hexadecimal format (lowercase) preceded by a backslash (\).
 *
 * @param str Pointer to the string to display.
 */
void	ft_putstr_non_printable(char *str)
{
	char				*hex_digits;
	int					i;
	unsigned char		c;

	hex_digits = "0123456789abcdef";
	i = 0;
	while (str[i] != '\0')
	{
		c = (unsigned char)str[i];
		if (c >= 32 && c <= 126)
		{
			write(1, &c, 1);
		}
		else
		{
			write(1, "\\", 1);
			write(1, &hex_digits[c / 16], 1);
			write(1, &hex_digits[c % 16], 1);
		}
		i++;
	}
}
/*
int	main(void)
{
	printf("=== Running tests for ft_putstr_non_printable ===\n\n");

	// Test 1: Standard subject example
	printf("Test 1 [Subject example]:\n");
	printf("  Expected Output : Coucou\\0as tu vas ?\\0a\n");
	printf("  Actual Output   : ");
	ft_putstr_non_printable("Coucou\nas tu vas ?\n");
	printf("\n\n");

	// Test 2: Tabs and Newlines
	printf("Test 2 [Tabs and Newlines]:\n");
	printf("  Expected Output : hola\\0a\\09\n");
	printf("  Actual Output   : ");
	ft_putstr_non_printable("hola\n\t");
	printf("\n\n");

	// Test 3: Printable characters only
	printf("Test 3 [Only Printable]:\n");
	printf("  Expected Output : Hello 42 Barcelona!\n");
	printf("  Actual Output   : ");
	ft_putstr_non_printable("Hello 42 Barcelona!");
	printf("\n\n");

	// Test 4: Boundary values (ASCII 127 / DEL)
	char test_del[2] = {127, '\0'};
	printf("Test 4 [ASCII 127 (DEL)]:\n");
	printf("  Expected Output : \\7f\n");
	printf("  Actual Output   : ");
	ft_putstr_non_printable(test_del);
	printf("\n");

	return (0);
}
*/
