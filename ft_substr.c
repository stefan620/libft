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

#include <stdlib.h>

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*sub;
	char	*ret;
	size_t i;
	i = 0;
	while(s[i] != '\0')
	{
		i++;
	}
	if (len > i || start > i)
		return(NULL);
	while(start > 0)
	{
		s++;
		start--;
	}
	sub = (char *)malloc(len*sizeof(char)+1);
	if (sub == NULL)
		return(NULL);
	ret = sub;
	while(len > 0)
	{
		*sub++ = *s++;
		len--;
	}
	*sub = '\0';
	return(ret);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(void)
{
	char * s = ft_substr("tripouille", 0, 42000000);
	printf("%s",s);
	return(0);
}*/
