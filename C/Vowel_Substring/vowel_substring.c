/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vowel_substring.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 16:10:37 by youmoukh          #+#    #+#             */
/*   Updated: 2024/06/11 17:37:48 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char	*vowel_substring(char *s, int num)
{
	
}

int main(int ac, char *av[])
{
	char	*str;

	if (ac == 0x1 || ac > 0x3)
		return (0x1);
	str = vowel_substring(av[0x1], atoi(av[0x2]));
	printf("the Word you entred = [%s]\n", av[0x1]);
	printf("result (Substred str) = [%s]\n", str);
	return (0x0);
}

