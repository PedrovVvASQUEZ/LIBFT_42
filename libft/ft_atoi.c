/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrellie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:26:04 by pgrellie          #+#    #+#             */
/*   Updated: 2023/11/24 15:51:27 by pgrellie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_space(char x);

int	ft_atoi(const char *str)
{
	int	x;
	int	sign;
	int	res;

	x = 0;
	sign = 1;
	res = 0;
	while (is_space(str[x]))
		x++;
	if (str[x] == '-' || str[x] == '+')
	{
		if (str[x] == '-')
			sign = -1;
		x++;
	}
	while (str[x] >= '0' && str[x] <= '9')
	{
		res = (str[x] - '0') + res * 10;
		x++;
	}
	return (res * sign);
}

int	is_space(char x)
{
	if ((x == ' ' || x == '\n' || x == '\t'
			|| x == '\v' || x == '\f' || x == '\r'))
		return (1);
	else
		return (0);
}

/*#include <stdio.h>

int	main(int ac, char **av)
{
	(void)ac;
	printf("%d\n", ft_atoi(av[1]));
	return (0);
}*/
