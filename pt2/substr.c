/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   substr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silic <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 19:51:16 by silic             #+#    #+#             */
/*   Updated: 2024/09/06 19:51:19 by silic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char *ft_substr(const char *s, unsigned int start, size_t len)
{
	char *sub;
	char *ret;
	while(start-- > 0)
	{
		s++;
	}
	sub = (char *)malloc(len*sizeof(char)+1);
	if (sub == NULL)
		return(NULL);
	ret = sub;
	while(len-- > 0)
	{
		*sub++ = *s++;
	}
	*sub = '\0';
	return(ret);
}

int main(void)
{
	char a[6] = "stefan";
	int b = 3;
	int c = 2;
	printf("%s",ft_substr(a,b,c));
	return(0);
}
