/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felixrod <felixrod@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 19:01:44 by felixrod          #+#    #+#             */
/*   Updated: 2026/08/03 19:01:50 by felixrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

/*
** Compares two null-terminated strings lexicographically.
** Returns:
**   0  if s1 and s2 are identical.
** < 0  if the first non-matching character in s1 has a lower ASCII value than in s2.
** > 0  if the first non-matching character in s1 has a higher ASCII value than in s2.
*/
int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	
	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
int	main(void)
{
	printf("--- Comparando ft_strcmp con el strcmp original ---\n\n");

	// 1. Cadenas idénticas (Esperado: 0)
	printf("1. Iguales (\"Hola\" vs \"Hola\"):\n");
	printf("   ft_strcmp: %d\n", ft_strcmp("Hola", "Hola"));
	printf("   strcmp:    %d\n\n", strcmp("Hola", "Hola"));

	// 2. Diferencia de mayúsculas/minúsculas ('A' = 65, 'a' = 97)
	printf("2. Mayús vs Minús (\"ADIOS\" vs \"adios\"):\n");
	printf("   ft_strcmp: %d\n", ft_strcmp("ADIOS", "adios"));
	printf("   strcmp:    %d\n\n", strcmp("ADIOS", "adios"));

	// 3. Cadena prefijo de otra ('\0' - 's')
	printf("3. Prefijo (\"Hola\" vs \"Holas\"):\n");
	printf("   ft_strcmp: %d\n", ft_strcmp("Hola", "Holas"));
	printf("   strcmp:    %d\n\n", strcmp("Hola", "Holas"));

	// 4. Cadena inversa ('s' - '\0')
	printf("4. Inversa (\"Holas\" vs \"Hola\"):\n");
	printf("   ft_strcmp: %d\n", ft_strcmp("Holas", "Hola"));
	printf("   strcmp:    %d\n\n", strcmp("Holas", "Hola"));

	// 5. Cadena vacía ('\0' - 'H')
	printf("5. Vacía vs Texto (\"\" vs \"Hola\"):\n");
	printf("   ft_strcmp: %d\n", ft_strcmp("", "Hola"));
	printf("   strcmp:    %d\n", strcmp("", "Hola"));

	return (0);
}
*/
