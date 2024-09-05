/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silic <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 15:18:35 by silic             #+#    #+#             */
/*   Updated: 2024/09/05 15:18:37 by silic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void *mem_chr(const void *str, int c, size_t n)
{
	const unsigned char *ptr = str;
	while (ptr)
	{
		if (*ptr++ == c && n > 0)
		{
			n--;
			return((char *) ptr)-1;
		}
	}
	return NULL;
	
		
}

int main(void)
{
	char a[12] = "\0www.i.com";
	int b = '.';
	char *ret = mem_chr(a,b,2);
	printf("%s \n",ret);;
}
