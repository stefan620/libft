/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silic <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 16:28:00 by silic             #+#    #+#             */
/*   Updated: 2024/09/05 16:28:02 by silic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

char    *ft_strnstr(const char *big, const char *little, size_t len)
{
    int i;
    int j;
	//const char *s = big;

    i = 0;
    if (ft_strlen((char *)little) <= 0)
        return ((char *)big);
    if (len > ft_strlen((char *)big))
    	return (0);
    while(big[i] != '\0'  && len != 0)
    {
        j = 0;
        while (big[i] == little[j] || little[i])
        {
        
           if(little[j] == '\0')
                return((char *)&big[i - j]);
            j++;
            i++;
            len--;
           
        }
        i++;
        len--;
    }
    return(NULL);

}
/*
int main(void)
{
    char a[30] = "aaabcabcd";
    char b[10] = "aabc";
    char *c = ft_strnstr(a, b, 5);
    printf("%s", c);
    return(0); 
}*/
