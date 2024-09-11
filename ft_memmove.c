/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silic <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 17:35:27 by silic             #+#    #+#             */
/*   Updated: 2024/09/03 17:35:29 by silic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *dptr = dest;
	const unsigned char *sptr = src;

	if (!dest && !src)
		return(dest);
	  if (src < dest)
        while (n--)
            dptr[n] = sptr[n];
    else 
        while (n--)
            *dptr++ = *sptr++;
    return (dest);
}
/*
int main (void)
{
	char src[100] = "Learningisfun";
	char dest[100] = "Learningisfun";
	mem_move(dest + 8, src, 10);
	puts(dest);
}
*/