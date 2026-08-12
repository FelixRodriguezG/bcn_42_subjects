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

#include <unistd.h>
#include <stdio.h>
#include <string.h>

/*
** Compares up to 'n' characters of two strings lexicographically.
** Returns:
**   0  if the first 'n' characters are identical or if n == 0.
** < 0  if s1 has a lower ASCII character than s2 within the first 'n' bytes.
** > 0  if s1 has a higher ASCII character than s2 within the first 'n' bytes.
*/
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	
	if (n == 0)
		return (0);

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i] && i < (n - 1))
	{
		i++;
	}
	return ((unsigned)s1[i] - (unsigned)s2[i]);
}
/*
int	main(void)
{
	printf("--- Comparando ft_strncmp con el strncmp original ---\n\n");

	// Nota: El especificador en printf debe ser %d (entero con signo),
	// ya que ambas funciones devuelven un int que puede ser negativo.

	// 1. Cadenas iguales probando más allá del final (n = 5 en "Hola")
	printf("1. Iguales hasta 5 caracteres (\"Hola\" vs \"Hola\", n = 5):\n");
	printf("   ft_strncmp: %d\n", ft_strncmp("Hola", "Hola", 5));
	printf("   strncmp:    %d\n\n", strncmp("Hola", "Hola", 5));

	// 2. Mayúsculas vs Minúsculas comparando 5 caracteres
	printf("2. Mayús vs Minús completos (\"ADIOS\" vs \"adios\", n = 5):\n");
	printf("   ft_strncmp: %d\n", ft_strncmp("ADIOS", "adios", 5));
	printf("   strncmp:    %d\n\n", strncmp("ADIOS", "adios", 5));

	// 3. Limitar n antes de la diferencia (Solo comparar los primeros 0 caracteres)
	printf("3. n = 0 (\"ADIOS\" vs \"adios\", n = 0):\n");
	printf("   ft_strncmp: %d\n", ft_strncmp("ADIOS", "adios", 0));
	printf("   strncmp:    %d\n\n", strncmp("ADIOS", "adios", 0));

	// 4. Cadenas diferentes pero iguales en los primeros N caracteres
	printf("4. Coincidencia parcial (\"Holagrama\" vs \"Holas\", n = 4):\n");
	printf("   ft_strncmp: %d\n", ft_strncmp("Holagrama", "Holas", 4));
	printf("   strncmp:    %d\n\n", strncmp("Holagrama", "Holas", 4));

	// 5. Comparar alcanzando la diferencia en n = 5
	printf("5. Diferencia en el 5º carácter (\"Holagrama\" vs \"Holas\", n = 5):\n");
	printf("   ft_strncmp: %d\n", ft_strncmp("Holagrama", "Holas", 5));
	printf("   strncmp:    %d\n", strncmp("Holagrama", "Holas", 5));

	return (0);
}
*/
