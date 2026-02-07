/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfox <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 19:22:26 by jfox              #+#    #+#             */
/*   Updated: 2025/09/04 10:07:56 by jfox             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int		count;
	int		alphabet;
	char	x;

	count = 0;
	alphabet = 26;
	x = 122;
	while (count < alphabet)
	{
		write(1, &x, 1);
		x--;
		count++;
	}
}
