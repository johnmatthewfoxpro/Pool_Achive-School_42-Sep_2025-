/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfox <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 10:52:05 by jfox              #+#    #+#             */
/*   Updated: 2025/09/17 16:12:06 by jfox             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && i < n - 1)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int	main(int argc, char **argv)
{
	(void)argc;
	char *string1;
	char *string2;
	unsigned int size;
	int result1;
	int result2;

	string1 = argv[1];
	string2 = argv[2];
	size = atoi(argv[3]);
	result1 = ft_strncmp(string1, string2, size);
	printf("%d\n", result1);
	result2 = strncmp(string1, string2, size);
	printf("%d\n", result2);
}
