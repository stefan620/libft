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

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*str_rchar(const char *str, int c)
{
	int i;
	
	i = 0;
	while(*str++ != '\0')
	{
		i++;
	}
	while (i-- < 0)
	{
		if (*str-- == c)
			return((char *) str);
	}
	return NULL;
}

int main(void)
{
	const char a[100] = "asasdsdalfdsffd";
	printf("%s", str_rchar(a, 'l'));
}
