/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silic <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 16:28:00 by silic             #+#    #+#             */
/*   Updated: 2024/09/05 16:28:02 by silic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
char	*ft_strnstr(const char *big,	const char *little, size_t len)
{
	if (ft_strlen(little) == 0)
		return(big);


	return (NULL); 
}
int main(void)
{
	char a[5] = "abcde";
	char b[2] = "";
	char *c = ft_strnstr(a, b, 1);
	printf("%s", c);
	return(0); 
}
