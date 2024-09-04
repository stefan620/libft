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

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*str_chr(const char *str, int search_str)
{
	int i;
	
	i = 0;
	while(str[i] != '\0')
	{
		if (*str++ == search_str)
		{
			return ((char *)str);
		}
		i++;
	}
	return NULL;
}

int main(void)
{
	char a[10] = "";
	printf("%s",str_chr(a, 'l'));
	 
}
