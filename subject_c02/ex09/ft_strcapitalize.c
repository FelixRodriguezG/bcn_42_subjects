/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcappitalize.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tu_login <felixrod@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/31 04:48:49 by tu_login          #+#    #+#             */
/*   Updated: 2026/08/05 18:31:14 by felixrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

//void run_test(char *test_name, char *input, char *expected);
char	*ft_strcapitalize(char *str);
int		ft_is_alfanum(char c);

/**
 * Checks if a character is alphanumeric (a-z, A-Z, 0-9).
 *
 * @param c Character to check.
 * @return 1 if alphanumeric, 0 otherwise.
 */
int	ft_is_alfanum(char c)
{
	if ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

/**
 * Capitalizes the first letter of each word in a string and converts 
 * the rest of the word to lowercase. A word is defined as a sequence 
 * of alphanumeric characters.
 *
 * @param str Pointer to the string to capitalize.
 * @return Pointer to the modified string.
 */
char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if (i == 0 || !ft_is_alfanum(str[i - 1]))
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	// 1. Frase clásica de la Piscina
    run_test("Frase base",
             "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un",
             "Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un");

    // 2. Todo en minúsculas con espacios
    run_test("Minusculas simples",
             "hola que tal",
             "Hola Que Tal");

    // 3. Palabras con mayúsculas mezcladas (debería limpiar las mayúscu
	// las internas)
    run_test("Mayusculas intercaladas",
             "hOla mUnDo",
             "Hola Mundo");

    // 4. Caracteres especiales y símbolos raros como separadores
    run_test("Simbolos multiples",
             "test*de-palabras_con.otros#caracteres",
             "Test*De-Palabras_Con.Otros#Caracteres");

    // 5. Números al inicio y en medio de las palabras
    run_test("Numeros y palabras",
             "42cc nbr1 and 2be",
             "42cc Nbr1 And 2be");

    // 6. Cadena vacía
    run_test("Cadena vacia",
             "",
             "");

    printf("=== FIN DE LAS PRUEBAS ===\n");
	return (0);
}

void run_test(char *test_name, char *input, char *expected)
{
	char buffer[100];
    int i = 0;

    while (input[i])
    {
        buffer[i] = input[i];
        i++;
    }
    buffer[i] = '\0';

    ft_strcapitalize(buffer);

    printf("Test: %s\n", test_name);
    printf("  Input:    \"%s\"\n", input);
    printf("  Resultado: \"%s\"\n", buffer);
    printf("  Esperado:  \"%s\"\n", expected);

    // Verificación simple
    int match = 1;
    i = 0;
    while (buffer[i] || expected[i])
    {
        if (buffer[i] != expected[i])
            match = 0;
        i++;
    }

    if (match)
        printf("  👉 [OK] ¡Prueba superada!\n\n");
    else
        printf("  ❌ [KO] Hay una diferencia.\n\n");
}
*/
