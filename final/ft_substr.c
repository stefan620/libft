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
#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char		*sub;
	size_t		i;

	i = ft_strlen(s);
	if (!s)
		return (NULL);
	if (start + len > i && len != i)
		len = len - 1;
	if (start > i)
		sub = (char *)malloc(sizeof(char));
	else if (len >= i && start <= i)
		sub = (char *)malloc((i - start + 1) * sizeof(char));
	else
		sub = (char *)malloc((len + 1) * sizeof(char));
	if (sub == NULL)
		return (NULL);
	if (start > i)
		ft_strlcpy(sub, "", 1);
	else if (len >= i && start <= i)
		ft_strlcpy(sub, s + start, i + 1);
	else
		ft_strlcpy(sub, s + start, len + 1);
	return (sub);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(void)
{
	char * s = ft_substr("tripouille", 1, 42000);
	printf("%s",s);
	return(0);
}*/
