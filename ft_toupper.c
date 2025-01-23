/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toupper.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silic <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 17:33:31 by silic             #+#    #+#             */
/*   Updated: 2024/09/04 17:33:34 by silic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int ch)
{
	if (ch >= 97 && ch <= 122)
		return (ch - 32);
	else
		return (ch);
}
/*
#include <unistd.h>
#include <stdio.h>
#include <ctype.h>
int main(void)
{
	int a = '9';
	printf("%c",to_upper(a));
}
*/
