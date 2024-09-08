/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silic <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 14:35:07 by silic             #+#    #+#             */
/*   Updated: 2024/09/03 14:35:09 by silic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void    ft_bzero(void *str, size_t n)
{
    unsigned char   *ptr;
    ptr = (unsigned char *)str;
    
    while(n-- > 0)
    {
        *ptr++ = '0';
    }
}
/*
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char str[50] = "sdadasd";
    ft_bzero(str, 5);
    puts(str);
   
}
*/