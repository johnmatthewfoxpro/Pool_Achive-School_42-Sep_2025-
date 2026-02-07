/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfox <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 14:07:30 by jfox              #+#    #+#             */
/*   Updated: 2025/09/22 17:20:38 by jfox             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*result;
	int		i;
	int		x;

	i = 0;
	x = 0;
	while (src[i])
		i++;
	result = malloc(sizeof(char) * i + 1);
	if (result == NULL)
		return (NULL);
	while (src[x])
	{
		result[x] = src[x];
		x++;
	}
	result[x] = '\0';
	return (result);
}
