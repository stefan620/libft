/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silic <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 18:11:23 by silic             #+#    #+#             */
/*   Updated: 2024/09/04 18:11:25 by silic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int c)
{
	int				i;
	char			*ptr;
	unsigned char	*ptr1;

	ptr1 = (unsigned char *)&c;
	ptr = (char *)str;
	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	while (i > 0)
	{
		if (*str == *ptr1)
			return ((char *) str);
		i--;
		str--;
	}
	if (*ptr == *ptr1)
		return (ptr);
	if (*ptr1 == 0)
		return (ptr);
	return (0);
}
/*
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
	const char a[100] = "asasdsdalfdsffd";
	printf("%s", str_rchar(a, 'l'));
}*/
