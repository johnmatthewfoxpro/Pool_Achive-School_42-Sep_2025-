/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfox <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 17:27:24 by jfox              #+#    #+#             */
/*   Updated: 2025/09/04 09:59:07 by jfox             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int		count;
	int		alphabet;
	char	x;

	count = 0;
	alphabet = 26;
	x = 97;
	while (count < alphabet)
	{
		write(1, &x, 1);
		x++;
		count++;
	}
}
