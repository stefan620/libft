/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iatoi.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silic <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 17:47:13 by silic             #+#    #+#             */
/*   Updated: 2024/09/09 17:47:16 by silic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char    *ft_itoa(int n)
{
    int a;
    int i;
    char *s;
    
    i = 0;
    a = n;
    if (n == 0)
    	return ("0");
    if (a < 0)
         a = a *-1;
    while (a != 0)
    {
        a = a / 10;
        i++;
    }
    if (n > 0)
    {
        s = (char *) malloc(i * sizeof(char) + 1);
        s[i] = '\0';
        if (n < 0)
        n = n * -1;
    	while (i > 0)
    	{
        	s[i-1] = n % 10 + '0';
        	n = n/10;
        	i--;
    	}
    }
    else
    {
        s = (char *) malloc(i * sizeof(char) + 2);
        *s = '-';
         s[i+1] = '\0';
         if (n < 0)
        n = n * -1;
    	while (i > 0)
    	{
        	s[i] = n % 10 + '0';
        	n = n/10;
        	i--;
    }
    }   
    return(s);
}
/*
int main(void)
{
    int n = 0;
    printf ("%s", ft_itoa(n));
    
}*/
