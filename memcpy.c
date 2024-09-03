/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silic <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 17:17:03 by silic             #+#    #+#             */
/*   Updated: 2024/09/03 17:17:05 by silic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

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

int main(void)
{
	char src[100] = "Learningisfun";
	char dest[100] = "Learningisfun";
	mem_cpy(dest + 8, src, 11);
	puts(dest);
}
