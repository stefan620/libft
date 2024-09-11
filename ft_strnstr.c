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

char    *ft_strnstr(const char *big,    const char *little, size_t len)
{
    int i;
    int j;
    char *s = big;

    i = 0;
    i = 0;
    /*if (ft_strlen(little) == 0)
        return(big);*/
    while(big[i]  && len != 0)
    {
        j = 0;
        while (big[i] == little[j] || little[i])
        {
           if(little[j] == '\0')
                return(&big[i-j]);
            j++;
            i++;
            len--;
           
        }
        i++;
        len--;
    }
    return(NULL);

}
int main(void)
{
    char a[6] = "abcde";
    char b[3] = "cd";
    char *c = ft_strnstr(a, b, 6);
    printf("%s", c);
    return(0); 
}