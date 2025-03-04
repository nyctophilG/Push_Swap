/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gosahin <gosahin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:31:02 by gosahin           #+#    #+#             */
/*   Updated: 2024/11/02 12:26:24 by gosahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*new_node;

	if (lst == NULL)
	{
		return ;
	}
	while (*lst != NULL)
	{
		new_node = (*lst);
		del(new_node->content);
		*lst = (*lst)->next;
		free(new_node);
	}
}
