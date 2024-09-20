/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silic <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 15:30:40 by silic             #+#    #+#             */
/*   Updated: 2024/09/02 15:30:42 by silic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int str)
{
	if (str >= 65 && str <= 90)
		return (1);
	else if (str >= 97 && str <= 122)
		return (1);
	else if (str >= 48 && str <= 57)
		return (1);
	else
		return (0);
}
/*
#include <unistd.h>
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int  a = is_alnum('*');
	printf("%d" ,a);
	printf ("%d", isalnum('*'));
}*/
