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
void	*mem_cpy(void *dest, const void *src, size_t n);

void	*mem_move(void *dest, const void *src, size_t n)
{
	unsigned char *buff;
	unsigned char *dptr = dest;
	const unsigned char *sptr = src;
	size_t m;
	m = n;
	buff = mem_cpy(buff, src, n);
	
	while (m-- > 0)
	{
		*dptr++ = *buff++; 
	}
	return(dest);
}

void	*mem_cpy(void *dest, const void *src, size_t n)
{
	unsigned char *dptr = dest;
	const unsigned char *sptr = src;
	
	while (n-- > 0)
	{
		*dptr++ = *sptr++;
	}
	return(dest);
}
int main (void)
{
	char src[100] = "Learningisfun";
	char dest[100] = "Learningisfun";
	mem_move(dest + 8, src, 10);
	puts(dest);
}
