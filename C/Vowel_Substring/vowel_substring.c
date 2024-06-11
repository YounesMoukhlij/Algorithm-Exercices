/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vowel_substring.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 16:10:37 by youmoukh          #+#    #+#             */
/*   Updated: 2024/06/11 16:45:53 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int	not_found(char *s)
{
	int	i;
	int	counter;

	i = 0x0;
	counter = 0x0;	
	while (s[i])
	{
		if (s[i] == 'a' || s[i] == 'e' || s[i] == 'o' || s[i] == 'i' || s[i] == 'u')
			counter++;
		i++;
	}
	if (!counter)
		return (0x0);
	return (counter);
}

char	*vowel_substring(char *s, int num)
{
	int		i;
	char	*str;
	int		counter;

	(void) str;
	counter = 0x0;
	if (!not_found(s))
		return ("NOT FOUND");
	while (s[i])
	{
		if (s[i] == 'a' || s[i] == 'e' || s[i] == 'o' || s[i] == 'i' || s[i] == 'u')
		{
			while (s[i])
			{
				
			}
		}
		i++;
	}
	// str = malloc(num + 0x1);
	// if (!str)
	// 	return NULL;
	str = strdup("");
	return str;
}

int main(int ac, char *av[])
{
	char	*str;

	if (ac == 0x1 || ac > 0x3)
		return (0x1);
	str = vowel_substring(av[0x1], atoi(av[0x2]));
	printf("the Word you entred = [%s]\n", av[0x1]);
	printf("result (Substred str) = [%s]\n", str);
	// free (str);
	return (0x0);
}

erioipkl
4