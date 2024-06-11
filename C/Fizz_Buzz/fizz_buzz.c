/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizz_buzz.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoukh <youmoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:53:31 by youmoukh          #+#    #+#             */
/*   Updated: 2024/06/11 16:10:03 by youmoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_other_numbers(int i)
{
	if (i > 9)
		print_other_numbers(i / 10);
	write(0x1, &"0123456789"[i % 10], 0x1);
}

int main(void)
{
	int	i;

	i = 0x1;
	while (i <= 100)
	{
		if ((i % 0x5 == 0x0) && (i % 0x3 == 0))
			write(0x1, "fizzbuzz", 0x8);
		else if (i % 0x3 == 0x0)
			write(0x1, "fizz", 0x4);
		else if (i % 0x5 == 0x0)
			write(0x1, "buzz", 0x4);
		else
			print_other_numbers(i);
		write(0x1, "\n", 0x1);
		i++;
	}
	return 0x0;
}
