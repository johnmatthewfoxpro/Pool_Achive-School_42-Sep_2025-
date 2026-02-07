/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfox <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 11:32:44 by jfox              #+#    #+#             */
/*   Updated: 2025/09/15 15:05:43 by jfox             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	x;
	int	size;

	i = 0;
	size = 0;
	while (to_find[size])
		size++;
	if (size == 0)
		return (str);
	while (str[i])
	{
		x = 0;
		while ((str[i + x] == to_find[x]) && to_find[x])
		{
			x++;
			if (x == size)
				return (&str[i]);
		}
		i++;
	}
	return (0);
}
