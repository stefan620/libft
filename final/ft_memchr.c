/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silic <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 15:18:35 by silic             #+#    #+#             */
/*   Updated: 2024/09/05 15:18:37 by silic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char		*s1;
	unsigned char		*s;
	size_t				i;

	s1 = (unsigned char *)&c;
	s = (void *)str;
	i = 0;
	if (n == 0)
		return (NULL);
	while (i < n)
	{
		if (s[i] == *s1)
			return (&s[i]);
		i++;
	}
	return (NULL);
}
/*
#include <unistd.h>
#include <stdio.h>
int main(void)
{
	char a[12] = "\0www.i.com";
	int b = '.';
	char *ret = ft_memchr(a,b,2);
	printf("%s \n",ret);;
}*/
