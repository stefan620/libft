/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silic <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 17:55:41 by silic             #+#    #+#             */
/*   Updated: 2024/09/04 17:55:42 by silic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int search_str)
{
	unsigned char	*ptr;
	unsigned char	*ptr1;

	ptr1 = (unsigned char *)&search_str;
	ptr = (unsigned char *)str;
	while (*ptr != '\0')
	{
		if (*ptr == *ptr1)
		{
			return ((char *)ptr);
		}
		ptr++;
	}
	if (*ptr1 == 0)
		return ((char *)ptr);
	return (0);
}
/*
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
	char a[10] = "";
	printf("%s",str_chr(a, 'l'));
	 
}*/
