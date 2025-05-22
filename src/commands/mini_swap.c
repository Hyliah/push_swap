/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <hlichten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 17:41:14 by hlichten          #+#    #+#             */
/*   Updated: 2025/03/27 19:53:50 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_2(t_stack *stack_a)
{
	if (stack_a->head->index == 1)
		ra(stack_a);
}

void	swap_3(t_stack *s_a, t_stack *s_b)
{
	t_node	*second;
	t_node	*last;

	(void)s_b;
	second = s_a->head->next;
	last = second->next;
	find_min(s_a);
	find_max(s_a);
	if (second->index == s_a->idx_max && s_a->head->index == s_a->idx_min)
	{
		sa(s_a);
		ra(s_a);
	}
	if (s_a->head->index == s_a->idx_max && last->index == s_a->idx_min)
	{
		ra(s_a);
		sa(s_a);
	}
	if (second->index == s_a->idx_min && s_a->head->index == s_a->idx_max)
		ra(s_a);
	if (second->index == s_a->idx_max && last->index == s_a->idx_min)
		rra(s_a);
	if (second->index == s_a->idx_min && last->index == s_a->idx_max)
		sa(s_a);
}

void	swap_4(t_stack *stack_a, t_stack *stack_b)
{
	update_min_max(stack_a, stack_b);
	while ((stack_a->head->index != stack_a->idx_min))
		ra(stack_a);
	pb(stack_a, stack_b);
	swap_3(stack_a, stack_b);
	pa(stack_a, stack_b);
}

void	swap_5(t_stack *stack_a, t_stack *stack_b)
{
	while (stack_a->cnt_node > 3)
	{	
		update_min_max(stack_a, stack_b);
		if (find_placement(stack_a, stack_a->idx_min) > 2)
		{
			while ((stack_a->head->index != stack_a->idx_min))
				rra(stack_a);
		}
		else
		{
			while ((stack_a->head->index != stack_a->idx_min))
				ra(stack_a);
		}
		pb(stack_a, stack_b);
	}
	swap_3(stack_a, stack_b);
	pa(stack_a, stack_b);
	pa(stack_a, stack_b);
}
