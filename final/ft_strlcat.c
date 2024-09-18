/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silic <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 15:28:08 by silic             #+#    #+#             */
/*   Updated: 2024/09/14 15:28:12 by silic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <bsd/string.h>
#include <stdlib.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;
	
	i = ft_strlen(dst) + 1;
	j = 0;
	if (size  > ft_strlen(dst))
       		return(i + ft_strlen(src) -1);
	if (size != 0)
	{
		while (src[i] || j < (size))
		{
			dst[i] = src[j];
			i++;
			j++;
		}
		dst[i] = '\0';
		return(size + ft_strlen(src));
	}
	return(ft_strlen(src));
}
/*
int main(void)
{

}*/
