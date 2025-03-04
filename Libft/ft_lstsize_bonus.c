/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gosahin <gosahin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:23:34 by gosahin           #+#    #+#             */
/*   Updated: 2024/11/02 12:26:43 by gosahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*new_node;

	count = 0;
	new_node = lst;
	while (new_node != NULL)
	{
		new_node = new_node->next;
		count++;
	}
	return (count);
}
