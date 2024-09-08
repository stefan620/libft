/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silic <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 16:38:42 by silic             #+#    #+#             */
/*   Updated: 2024/09/05 16:38:44 by silic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int			a;
	const char	*min;

	a = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	min = str;
	if (*min == '-' || *min == '+')
		str++;
	while (*str != '\0' && (*str >= '0' && *str <= '9'))
	{
		a = a * 10 + (*str - '0');
		str++;
	}
	if (*min == '-')
		a = a * -1;
	return (a);
}
/*
#include <stdlib.h>
#include <stdio.h>


int main(void)
{
	char a[] = "                          -+1231434";
	
	printf("%d \n", ft_atoi(a));
	printf("%d \n", atoi(a));
}
*/