/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfox <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 15:33:44 by jfox              #+#    #+#             */
/*   Updated: 2025/09/08 15:56:47 by jfox             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_rev_int_tab(int *tab, int size)
{
	int	count;
	int	temp;
	int	fin;

	count = 0;
	temp = 0;
	fin = size - 1;
	while (count < size / 2)
	{
		temp = tab[count];
		tab[count] = tab[fin];
		tab[fin] = temp;
		count++;
		fin--;
	}
}
