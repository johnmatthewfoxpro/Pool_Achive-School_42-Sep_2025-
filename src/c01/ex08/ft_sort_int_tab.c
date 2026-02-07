/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfox <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 09:11:45 by jfox              #+#    #+#             */
/*   Updated: 2025/09/09 12:13:41 by jfox             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	count;
	int	list;

	temp = 0;
	count = 0;
	list = count + 1;
	while (count <= size - 1)
	{
		while (list <= size - 1)
		{
			if (tab[count] > tab[list])
			{
				temp = tab[count];
				tab [count] = tab[list];
				tab[list] = temp;
			}
			list++;
		}
		list = count + 1;
		count++;
	}
}
