/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfox <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 09:59:41 by jfox              #+#    #+#             */
/*   Updated: 2025/09/23 11:03:10 by jfox             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*table;
	int	i;

	i = 0;
	if (min >= max)
	{
		return (NULL);
	}
	size = max - min;
	table = malloc(sizeof(int) * size);
	if (!table)
		return (NULL);
	while (min < max)
	{
		table[i] = min;
		min++;
		i++;
	}
	return (table);
}
