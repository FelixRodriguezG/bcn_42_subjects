/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felixrod <felixrod@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 12:06:40 by felixrod          #+#    #+#             */
/*   Updated: 2026/08/06 12:06:49 by felixrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

/**
 * @brief Reproduces the behavior of the strcat function (man strcat).
 *
 * @param dest Pointer to the destination string to append to.
 * @param src Pointer to the source string to be appended.
 * @return Returns a pointer to the destination string (dest).
 *
 * @note Overwrites the null byte ('\0') at the end of dest and adds a
 *       new null byte at the end of the resulting string.
 */
char    *ft_strcat(char *dest, char *src)
{
    unsigned int    i;
    unsigned int    j;

    i = 0;
    j = 0;
    while (dest[i] != '\0')
        i++;
    while (src[j] != '\0')
    {
        dest[i + j] = src[j];
        j++;
    }
    dest[i + j] = '\0';
    return (dest);
}
/*
int	main(void)
{
	// --- TEST 1: Caso básico ---
	{
		char src[] = "Mundo!";
		char dest[50] = "Hola ";

		ft_strcat(dest, src);
		printf("Test 1 (Hola + Mundo!): %s\n", dest); // Debe imprimir: Hola Mundo!
	}

	// --- TEST 2: Concatenar con un string vacío en src ---
	{
		char src[] = "";
		char dest[50] = "Prueba";

		ft_strcat(dest, src);
		printf("Test 2 (Src vacio): %s\n", dest); // Debe imprimir: Prueba
	}

	// --- TEST 3: Concatenar sobre un dest vacío ---
	{
		char src[] = "Piscine";
		char dest[50] = "";

		ft_strcat(dest, src);
		printf("Test 3 (Dest vacio): %s\n", dest); // Debe imprimir: Piscine
	}

	// --- TEST 4: Cadenas largas o con números/símbolos ---
	{
		char src[] = " 42 🚀";
		char dest[50] = "Campus";

		ft_strcat(dest, src);
		printf("Test 4 (Simbolos/Numeros): %s\n", dest); // Debe imprimir: Campus 42 🚀
	}

	// --- TEST 5: Verificación del valor de retorno ---
	{
		char src[] = "42";
		char dest[50] = "Evaluacion ";

		char *ret = ft_strcat(dest, src);
		printf("Test 5 (Puntero devuelto): %s\n", ret); // Debe ser idéntico a dest
	}

	return (0);
}
*/
