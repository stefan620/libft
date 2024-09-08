/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silic <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 15:53:55 by silic             #+#    #+#             */
/*   Updated: 2024/09/05 15:54:06 by silic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const char *str1, const char *str2, size_t n)
{
	while (str1 && n > 0)
	{
		if (*str1 != *str2)
			return (*str2 - *str1);
		str1++;
		str2++;
		n--;
	}
	return (0);
}
/*
#include <unistd.h>
#include <stdio.h>
#include <string.h>
int main(void)
{
	char a[10] = "\0stefan";
	char b[10] = "\0sefan";
	printf("%i \n", mem_cmp(b,a,10));
	printf("%i \n", memcmp(b,a,10));
}*/
