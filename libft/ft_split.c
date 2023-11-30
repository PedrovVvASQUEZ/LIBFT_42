/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrellie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:33:44 by pgrellie          #+#    #+#             */
/*   Updated: 2023/11/21 15:10:24 by pgrellie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(char const *s, char c)
{
	int	x;
	int	count;

	x = 0;
	count = 0;
	while (s && s[x])
	{
		if (s[x] != c)
		{
			count++;
			while (s[x] != c && s[x])
				x++;
		}
		else
			x++;
	}
	return (count);
}

static int	word_len(char const *str, char c)
{
	int	x;

	x = 0;
	while (str[x] && str[x] != c)
		x++;
	return (x);
}

static void	*ft_free(char **strs, int count)
{
	int	x;

	x = 0;
	while (x < count)
	{
		free(strs[x]);
		x++;
	}
	free(strs);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		y;
	int		wlen;
	char	**tab;

	tab = (char **)malloc(sizeof(char *) * (word_count(s, c) + 1));
	if (!tab || !s)
		return (ft_free(tab, 0));
	y = 0;
	while (*s)
	{
		wlen = 0;
		while (*s && *s == c)
			s++;
		wlen = word_len(s, c);
		if (wlen)
		{
			tab[y] = ft_substr(s, 0, wlen);
			if (!tab[y])
				return (ft_free(tab, y));
			y++;
		}
		s += wlen;
	}
	tab[y] = 0;
	return (tab);
}
/*
#include <stdio.h>
int	main(void)i
{
	char	**tab;
	int	x;
	x = 0;
	tab = ft_split("salut comment vas tu", ' ');
	while (tab[x])
	{
		printf("%s\n", tab[x]);
		x++;
	}
	return (0);
}*/
