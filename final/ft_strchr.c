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
	int		i;
	char	*ptr;

	i = 0;
	ptr = (char *)str;
	while (*ptr != '\0')
	{
		if (*ptr == search_str)
		{
			return (ptr);
		}
		ptr++;
	}
	if (search_str == 0)
		return (ptr);
	if (search_str <= 32 || search_str >= 126)
		return ((char *)str);
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
