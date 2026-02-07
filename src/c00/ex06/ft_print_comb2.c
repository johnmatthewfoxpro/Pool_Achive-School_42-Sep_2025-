/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfox <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 14:50:01 by jfox              #+#    #+#             */
/*   Updated: 2025/09/08 15:14:11 by jfox             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int a, int b)
{
	int	first;
	int	second;

	first = a / 10;
	first = first + 48;
	write(1, &first, 1);
	first = a % 10;
	first = first + 48;
	write(1, &first, 1);
	write(1, " ", 1);
	second = b / 10;
	second = second + 48;
	write(1, &second, 1);
	second = b % 10;
	second = second + 48;
	write(1, &second, 1);
	first = a;
	if (first < 98)
	{
		write(1, ",", 1);
	}
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;

	a = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			print(a, b);
			b++;
		}
		a++;
	}
}
