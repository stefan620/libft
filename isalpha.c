/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silic <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 12:55:24 by silic             #+#    #+#             */
/*   Updated: 2024/09/02 12:55:45 by silic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <ctype.h>

int	is_alpha(int str)
{
	if (str >= 65 && str <= 90)
		return(1);
	else if (str >= 97 && str <= 122)
		return (1);
	else
		return (0);
}

int	main(void)
{
	int  a = is_alpha('1');
	printf("%d" ,a);
	printf("%d" ,isalpha('d'));
}
