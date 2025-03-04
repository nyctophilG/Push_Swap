/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gosahin <gosahin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 14:18:41 by gosahin           #+#    #+#             */
/*   Updated: 2025/03/04 15:00:14 by gosahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(t_stack **node)
{
	int	temp;
	if (node != '\0' || *node != '\0' || (*node)->next != '\0')
		return ;
	if (ft_lstsize(*node) > 1)
	{
		temp = (*node)->content;
		(*node)->content = (*node)->next->content;
		(*node)->next->content = temp;
	}
	return ;
}

void	ft_sa(t_stack **stack_a)
{
	ft_swap(stack_a);
	ft_printf("sa\n");
}

void	ft_sb(t_stack **stack_b)
{
	ft_swap(stack_b);
	ft_printf("sb\n");
}

void	ft_pa(t_stack **stack_a, t_stack **stack_b)
{
	t_stack *temp;

	if (*stack_b != '\0')
	{
		
	}
}