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
#include <stdlib.h>

static int	beggining(char const *s1, char const *set);
static int	end(char const *s1, char const *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	int		a;
	int		b;
	char	*c;
	char	*ret;
	int		i;
	
	if (!s1 || !set)
		return (NULL);
	set = set;
	i = 0;
	a = beggining(s1, set);
	b = end(s1, set);
	c = (char *)malloc((20) * sizeof(char));
	if (!c)
		return (NULL);
	ret = c;
	while (a != b)
	{
		c[i] = s1[a];
		a++;
		i++;
	}
	c[i] = '\0';
	return ((char *)ret);
}

static int	beggining(char const *s1, char const *set)
{
	int				i;
	int				j;

	i = 0;
	j = 0;
	while (*s1)
	{
		while (s1[j] == set[i])
		{
			i = 0;
			j++;
		}
		i++;
		if (set[i] == '\0')
			return (j);
		s1++;
	}
	return (0);
}

static int	end(char const *s1, char const *set)
{
	int				i;
	int				j;

	i = 0;
	j = 0;
	while (s1[i])
		i++;
	while (i != 0)
	{
		while (s1[i] == set[j])
		{
			j = 0;
			j++;
		}
		i--;
		
		if (set[j] == '\0')
			return (i - 1);
		i--;
	}
	return (0);
}

#include <stdio.h>
int main(void)
{
	printf("%s",ft_strtrim("xxytripouilleyyx", "xyx"));
}
