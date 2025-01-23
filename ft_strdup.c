/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silic <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 17:38:22 by silic             #+#    #+#             */
/*   Updated: 2024/09/06 17:38:24 by silic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	int		i;
	char	*dup;
	char	*dup1;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	dup = (char *) malloc(i * sizeof(char) + 1);
	if (dup == NULL)
		return (NULL);
	dup1 = dup;
	while (i-- > 0)
	{
		*dup++ = *s++;
	}
	*dup = '\0';
	return (dup1);
}
/*
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    char s[7] = "stefan";
    char *a = ft_strdup(s);
    printf("%s", a);
}*/
