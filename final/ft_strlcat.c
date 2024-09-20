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

#include "libft.h"
#include <bsd/string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	k;

	k = ft_strlen(dst);
	i = 0;
	j = ft_strlen(dst);
	if (ft_strlen(dst) >= size)
		return (ft_strlen(src) + size);
	if (size == 0)
		return (ft_strlen(src));
	while (src[i] && j != size - 1 && i != size - 1)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (ft_strlen(src) + k);
}
/*
int	main(void)
{

}*/
