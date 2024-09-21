/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silic <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 16:46:41 by silic             #+#    #+#             */
/*   Updated: 2024/09/20 16:46:43 by silic            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*k;

	k = *lst;
	if (k == NULL)
	{
		*lst = new;
	}
	else
	{
		while (k -> next != NULL)
			k = k -> next;
		k -> next = new;
	}
}
