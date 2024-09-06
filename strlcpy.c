/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silic <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 18:48:36 by silic             #+#    #+#             */
/*   Updated: 2024/09/06 18:48:41 by silic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int	i;
	int	j;
	
	i = 0;
	j = 0;
	while(src[i] != '\0')
		i++;
	while(dest[i]
}
*/
int main(void)
{
	char a[7] = "123456";
	char *b;
	
	b = malloc(3* sizeof(char));
	//printf("%d", strncpy(b, a, 3));
	strlcpy(b, a, 7);
	printf("%s", b);
}

