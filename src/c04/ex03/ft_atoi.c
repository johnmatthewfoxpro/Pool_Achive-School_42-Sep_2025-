/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfox <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 13:09:20 by jfox              #+#    #+#             */
/*   Updated: 2025/09/16 14:15:37 by jfox             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	number;
	int	state;

	i = 0;
	number = 0;
	state = 1;
	while (!(str[i] >= '0' && str[i] <= '9'))
	{
		if (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
			str++;
		if (str[i] == '+')
			state = state * 1;
		if (str[i] == '-')
			state = state * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = number * 10 + (str[i] - 48);
		i++;
	}
	return (number * state);
}
