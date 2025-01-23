/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silic <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 17:12:25 by silic             #+#    #+#             */
/*   Updated: 2024/09/09 17:12:27 by silic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;
	unsigned int	a;
	char			*ptr;

	ptr = s;
	i = 0;
	a = 0;
	while (*ptr != '\0')
	{
		i++;
		ptr++;
	}
	while (a < i)
	{
		f(a, s++);
		a++;
	}
}
/*
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
void	iter(unsigned int i, char * s) 
{
	*s += i;
}
int main(void)
{
	char s[] = "0000000000";
	ft_striteri(s, iter);
	puts(s);
}*/
