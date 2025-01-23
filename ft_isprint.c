/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isprint.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silic <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 16:07:54 by silic             #+#    #+#             */
/*   Updated: 2024/09/02 16:07:57 by silic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int arg)
{
	if (arg >= 32 && arg <= 126)
		return (1);
	else
		return (0);
}
/*
#include <unistd.h>
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int a = is_print(01);
	printf("%d", a);
	printf ("%d", isprint(01)); 
}*/
