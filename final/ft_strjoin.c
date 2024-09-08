/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strjoin.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silic <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 20:06:30 by silic             #+#    #+#             */
/*   Updated: 2024/09/06 20:06:32 by silic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int			i;
	char		*s12;
	char		*ret;
	const char	*counter1 = s1;
	const char	*counter2 = s2;

	i = 0;
	while (*s1++ != '\0')
		i++;
	while (*s2++ != '\0')
		i++;
	s12 = (char *)malloc(i * sizeof(char) + 1);
	ret = s12;
	while (*counter1 != '\0')
		*s12++ = *counter1++;
	while (*counter2 != '\0')
		*s12++ = *counter2++;
	*s12 = '\0';
	return (ret);
}
/*
int main(void)
{
	char a[7] ="stefan";
	char b[7] = "stefan";
	
	printf("%s",ft_strjoin(a,b));
}*/
