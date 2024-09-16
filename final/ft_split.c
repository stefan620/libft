/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silic <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 15:26:05 by silic             #+#    #+#             */
/*   Updated: 2024/09/16 15:26:08 by silic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "libft.h"

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

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	i;
	size_t	len;

	i = 0;
	arr = (char **)malloc((counter(s, c) + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
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
			i++;
			s = s + len;
		}
	}
	arr[i] = '\0';
	return (arr);
}
/*
int main(void)
{
	ft_split("asdafsaadaffa", 'a');
}*/
