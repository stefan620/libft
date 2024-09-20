/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iatoi.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silic <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 17:47:13 by silic             #+#    #+#             */
/*   Updated: 2024/09/09 17:47:16 by silic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*if_zero(int n);
char	*min_int(int n);
char	*if_positive(int n);
char	*if_negativ(int n);

char	*ft_itoa(int n)
{
	char	*s;

	if (n > 0)
		s = if_positive(n);
	if (n < 0 && n != -2147483648)
		s = if_negativ(n);
	if (n == 0)
		s = if_zero(n);
	if (n == -2147483648)
		s = min_int(n);
	return (s);
}

char	*if_positive(int n)
{
	char	*s;
	int		a;
	int		i;

	i = 0;
	a = n;
	while (a != 0)
	{
		a = a / 10;
		i++;
	}
	s = (char *) malloc(i * sizeof(char) + 1);
	if (s == NULL)
		return (NULL);
	s[i] = '\0';
	if (n < 0)
		n = n * -1;
	while (i > 0)
	{
		s[i - 1] = n % 10 + '0';
		n = n / 10;
		i--;
	}
	return (s);
}

char	*if_negativ(int n)
{
	int		a;
	char	*s;
	int		i;

	i = 0;
	a = n;
	while (a != 0)
	{
		a = a / 10;
		i++;
	}
	s = (char *) malloc(i * sizeof(char) + 2);
	if (s == NULL)
		return (NULL);
	*s = '-';
	s[i + 1] = '\0';
	if (n < 0)
		n = n * -1;
	while (i > 0)
	{
		s[i] = n % 10 + '0';
		n = n / 10;
		i--;
	}
	return (s);
}

char	*if_zero(int n)
{
	char	*s;

	n = n * 1;
	s = (char *) malloc(1 * sizeof(char) + 1);
	if (s == NULL)
		return (NULL);
	s[0] = '0';
	s[1] = '\0';
	return (s);
}

char	*min_int(int n)
{
	char			*s;
	int				i;
	unsigned int	b;

	n = 2147483648;
	b = n;
	i = 0;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	s = (char *) malloc(12 * sizeof(char));
	if (s == NULL)
		return (NULL);
	*s = '-';
	s[i + 1] = '\0';
	while (i > 0)
	{
		s[i] = b % 10 + '0';
		b = b / 10;
		i--;
	}
	return (s);
}

/*
int main(void)
{
    int n = -2147483648;
    printf ("%s", ft_itoa(n));
    
}*/
