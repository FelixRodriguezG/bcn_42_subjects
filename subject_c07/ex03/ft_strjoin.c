/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felixrod <felixrod@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 18:32:36 by felixrod          #+#    #+#             */
/*   Updated: 2026/08/10 18:32:38 by felixrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str)
{
	int len;
	len = 0;
	while (str++)
		len++;
	return (len);
}

int ft_total_chars(**strs, *sep, num_sep)
{
	int characters;
	int len_sep;
	int chars_sep;
	
	characters = 0;
	len_sep = ft_strlen(sep);
	chars_sep = num_sep * len_sep;
	while (*strs)
	{
		characters += ft_strlen(*strs);
		*strs++;
	}
	return (characters + chars_sep);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	int total_chars;
	int total_sep;
	
	total_sep = size - 1;
	total_chars = ft_total_chars(strs, sep, total_sep);
	char *new_string = malloc(total_chars);
}
