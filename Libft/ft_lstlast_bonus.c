/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gosahin <gosahin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 17:12:04 by gosahin           #+#    #+#             */
/*   Updated: 2024/11/02 12:26:34 by gosahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*new_node;

	new_node = lst;
	if (new_node == NULL)
	{
		return (NULL);
	}
	while (new_node->next != NULL)
	{
		new_node = new_node->next;
	}
	return (new_node);
}
