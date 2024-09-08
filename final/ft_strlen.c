/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silic <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 16:16:55 by silic             #+#    #+#             */
/*   Updated: 2024/09/02 16:16:58 by silic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlen(char *str)
{
	size_t	n;

	n = 0;
	while (str[n])
	{
		n++;
	}
	return (n);
}
/*
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
	
	printf ("%zu", str_len(1,""));
}*/
