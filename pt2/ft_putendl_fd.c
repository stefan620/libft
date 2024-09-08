/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silic <silic700@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 21:12:03 by silic             #+#    #+#             */
/*   Updated: 2024/09/07 21:12:03 by silic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	while (*s)
	{
		write (fd, s, 1);
		s++;
	}
	write(fd, "\n", 1);
}
/*
int main(void)
{
    int a = 1;
    char b[7] = "stefn";
    ft_putendl_fd(b,a);
}*/