/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gosahin <gosahin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 15:41:37 by gosahin           #+#    #+#             */
/*   Updated: 2025/03/08 01:06:53 by gosahin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra(t_stack **stack_a)
{
	t_stack	*head;
	t_stack	*tail;

	if (ft_lstsize(*stack_a) > 1)
	{
		head = *stack_a;
		tail = ft_lstlast(*stack_a);
		*stack_a = (*stack_a)->next;
		tail->next = head;
		head->next = NULL;
		ft_printf("ra\n");
	}
}

void	ft_rra(t_stack **stack_a)
{
	 t_stack	*tail;
	 t_stack	*temp;

	if (ft_lstsize(*stack_a) > 1)
	{
		temp = *stack_a;
		while (temp->next->next != NULL)
			temp = temp->content;
		tail = temp->next;
		temp->next = NULL;
		tail->next = *stack_a;
		*stack_a = tail;
		ft_printf("rra\n");
	}	
}

void	ft_rrb(t_stack **stack_b)
{
	t_stack	*tail;
	t_stack	*temp;

	if (ft_lstsize(*stack_b) > 1)
	{
		temp = *stack_b;
		while (temp->next->next != NULL)
			temp = temp->next;
		tail = temp->next;
		temp->next = NULL;
		tail->next = *stack_b;
		stack_b = tail;
		ft_printf("rrb");
	}
}
