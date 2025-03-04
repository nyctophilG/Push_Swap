/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gosahin <gosahin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 14:18:41 by gosahin           #+#    #+#             */
/*   Updated: 2025/03/04 16:45:59 by gosahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_swap(t_stack **node)
{
	int	temp;

	if (node != NULL || *node != NULL || (*node)->next != NULL)
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
	t_stack	*temp;

	if (*stack_b != NULL)
	{
		temp = *stack_b;
		*stack_b = (*stack_b)->next;
		temp->next = *stack_a;
		*stack_a = temp;
		ft_printf("pa\n");
	}
}

void	ft_pb(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*temp;

	if (*stack_a != NULL)
	{
		temp = *stack_a;
		*stack_a = (*stack_a)->next;
		temp->content = *stack_b;
		*stack_b = temp;
		ft_printf("pb\n");
	}
}
