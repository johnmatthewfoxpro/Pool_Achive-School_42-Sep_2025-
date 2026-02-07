/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfox <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 10:24:45 by jfox              #+#    #+#             */
/*   Updated: 2025/09/25 10:56:21 by jfox             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *str, char **strs, char *sep, int size)
{
	int	i;
	int	j;
	int	x;
	int	y;

	i = 0;
	j = 0;
	x = 0;
	y = 0;
	str[0] = '\0';
	while (i < size)
	{
		while (strs[i][j])
			str[x++] = strs[i][j++];
		while (sep[y] && i < (size - 1))
			str[x++] = sep[y++];
		j = 0;
		y = 0;
		i++;
	}
	str[x] = '\0';
	return (str);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_strlenall(char **strs, int size, char *sep)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (i < size)
	{
		n = n + ft_strlen(strs[i]);
		i++;
	}
	n += ft_strlen(sep) * (size - 1);
	return (n);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		all;
	char	*result;

	if (size == 0)
	{
		result = malloc(1);
		if (result == NULL)
			return (NULL);
		result[0] = '\0';
		return (result);
	}
	all = ft_strlenall(&strs[0], size, sep);
	result = malloc(sizeof(char) * all + 1);
	return (ft_strcat(result, strs, sep, size));
}
