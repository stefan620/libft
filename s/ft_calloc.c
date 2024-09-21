/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silic <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 19:29:50 by silic             #+#    #+#             */
/*   Updated: 2024/09/05 19:29:51 by silic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static void	b_zero(void *str, size_t n);

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*r;
	size_t	s;

	s = size * nmemb;
	if ((float) size > (float) 2147483647 && (float) nmemb > (float) 2147483647)
		return (NULL);
	if ((float) s > (float) 2147483647)
		return (NULL);
	r = (void *) malloc (size * nmemb);
	if (r == NULL)
		return (NULL);
	b_zero (r, size * nmemb);
	return (r);
}

static void	b_zero(void *str, size_t n)
{
	unsigned char	*ptr;

	ptr = str;
	while (n-- > 0)
	{
		*ptr++ = 0;
	}
}
/*
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
	int a = 10;
	int b = a;
	int *d = (int *) ft_calloc ( a, sizeof (int));
	if (d == NULL)
		printf("%s \n", "wrong ");
	else
		printf("%s \n", "right ");
	
	int *c = (int *) calloc ( a, sizeof (int));
	if (c == NULL)
		printf("%s \n", "wrong-original ");
	else
		printf("%s,\n", "right-original ");
		
	printf("original\n");
	for (int i = 0; i < a; i++)
	{
      		printf("%d",c[i]);
      	}
	printf("\n");
	printf("mine\n");
      	for (int j = 0; j < a; j++)
      	{
		printf("%d",d[j]);
	}
	free(d);
	free(c);
}
*/
