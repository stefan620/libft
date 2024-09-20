/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silic <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 18:19:51 by silic             #+#    #+#             */
/*   Updated: 2024/09/20 18:19:54 by silic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list  *tmp;
	t_list	*begin;

	begin = *lst;
	if (!begin)
		return;
	while (begin)
	{
		tmp = begin -> next;
		del(begin);
		begin = tmp;
	}	
	free(lst);
	*lst = NULL;
}
