/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isdigit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silic <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 13:58:26 by silic             #+#    #+#             */
/*   Updated: 2024/09/02 13:58:32 by silic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <ctype.h>

int	is_alpha(int str)
{
	if (str >= 48 && str <= 57)
		return(1);
	else
		return (0);
}

int	main(void)
{
	int  a = is_alpha('d');
	printf("%d" ,a);
	printf("%d" ,isdigit('1'));
}
