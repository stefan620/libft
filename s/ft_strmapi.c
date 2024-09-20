/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silic <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 15:46:30 by silic             #+#    #+#             */
/*   Updated: 2024/09/09 15:46:32 by silic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	a;
	char			*s1;
	char			*s2;

	i = 0;
	a = 0;
	while (s[i])
		i++;
	s1 = (char *) malloc(i * sizeof(char) + 1);
	if (s1 == NULL)
		return (NULL);
	s2 = s1;
	while (a < i)
	{
		*s1++ = f(a,*s++);
		a++;
	}
	*s1 = '\0';
	return (s2);
}
/*
char addOne(unsigned int i, char c) {return (i + c);}

int main(void)
{
	char * s = ft_strmapi("1234", addOne);			
}*/
