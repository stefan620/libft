/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silic <silic700@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 20:14:45 by silic             #+#    #+#             */
/*   Updated: 2024/09/07 20:14:45 by silic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

static int	beggining(char const *s1, char const *set);
static int	end(char const *s1, char const *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ret;
	int		start;
	int		end1;

	start = beggining(s1, set);
	end1 = end(s1, set);
	ret = ft_substr(s1, start, end1 - start);
	return (ret);
}

static int	beggining(char const *s1, char const *set)
{
	int	start;

	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	return (start);
}

static int	end(char const *s1, char const *set)
{
	int	end;

	end = ft_strlen(s1);
	while (end != 0 && ft_strchr(set, s1[end - 1]))
		end--;
	return (end);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%s",ft_strtrim("", ""));

}*/
