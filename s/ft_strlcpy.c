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
#include <stdlib.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	while (src[j])
		j++;
	if (size != 0)
	{
		while (src[i] && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (j);
}

/*
#include <unistd.h>
#include <stdio.h>
#include <bsd/string.h>
#include <stdlib.h>
int main(void)
{
	char src[] = "coucou";
	char dest[10]; memset(dest, 'A', 10);
	printf("%zu", ft_strlcpy(dest, 0, 0));
	printf("%zu", strlcpy(dest, 0, 0));
	//printf("%s", dest);
	//puts(dest);
}*/
