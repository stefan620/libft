/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silic <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 14:35:07 by silic             #+#    #+#             */
/*   Updated: 2024/09/03 14:35:09 by silic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

void	b_zero(void *str, size_t n)
{
	unsigned char *ptr = str;
	
	while(n-- > 0)
	{
		*ptr++ = '\0';
	}
	
}

int main(void)
{
	int  str[50];
	printf("%s", (char *)mem_set(str, 4));
}
