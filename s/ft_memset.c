/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silic <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 16:49:56 by silic             #+#    #+#             */
/*   Updated: 2024/09/02 16:49:58 by silic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = str;
	while (n-- > 0)
	{
		*ptr++ = c;
	}
	return (str);
}
/*
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
	int  str[50];
	

	
	
	printf("%s", (char *)mem_set(str, 'a', 4));
	
}*/
