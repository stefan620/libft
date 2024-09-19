/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silic <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 15:26:05 by silic             #+#    #+#             */
/*   Updated: 2024/09/19 19:17:03 by silic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

static int	counter(char const *s, char c)
{
	int	i;
	int	reset;

	i = 0;
	reset = 0;
	while (*s)
	{
		if (*s != c && reset == 0)
		{
			reset = 1;
			i++;
		}
		if (*s == c)
			reset = 0;
		s++;
	}
	return (i);
}

static void	free_all(char **arr)
{
	int	i;

	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

static char	**do_stuff(const char *s, char c, char **arr)
{
	size_t	i;
	size_t	len;

	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (ft_strchr(s, c) == 0)
				len = ft_strlen(s);
			else
				len = ft_strchr(s, c) - s;
			arr[i] = ft_substr(s, 0, len);
			if (!arr[i])
				return (free_all(arr), NULL);
			i++;
			s = s + len;
		}
	}
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;

	arr = (char **)ft_calloc((counter(s, c) + 1), sizeof(char *));
	if (!arr)
		return (NULL);
	return (do_stuff(s, c, arr));
}
/*
int	main(void)
{
	ft_split("asdafsaadaffa", 'a');
}*/
