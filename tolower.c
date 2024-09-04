/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tolower.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silic <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 17:49:32 by silic             #+#    #+#             */
/*   Updated: 2024/09/04 17:49:35 by silic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <ctype.h>

int	to_lower(int ch)
{
	if (ch >= 97 && ch <= 122)
		return(ch);
	else if (ch >= 65 && ch <= 90)
		return(ch + 32);
	else
		return(ch);
}

int main(void)
{
	int a = 'M';
	printf("%c",to_lower(a));
}


