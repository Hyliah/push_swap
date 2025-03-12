/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 17:41:14 by hlichten          #+#    #+#             */
/*   Updated: 2025/03/12 00:57:15 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_2(t_stack *stack_a)
{
	(void)stack_a;

	if (stack_a->head->index == 1) // 1 0
	   ra(stack_a);
	//si l index est de 1 il devrait etre a 0, on intervertit juste
}
	// if (stack_a->head->index == 0 && second->index == 1)
	// 	end_program(s_a, s_b);

void	swap_3(t_stack *s_a, t_stack *s_b)
{
	t_node *second;
	t_node *last;

	(void)s_b;
	second = s_a->head->next; 
	last = second->next;
	find_min(s_a);
	find_max(s_a);
	if (second->index == s_a->idx_max && s_a->head->index == s_a->idx_min) // 0 2 1 
	{
		sa(s_a);
		ra(s_a);
	}
	if (s_a->head->index == s_a->idx_max && last->index == s_a->idx_min) // 2 1 0
	{
		ra(s_a);
		sa(s_a);
	}
	if (second->index == s_a->idx_min && s_a->head->index == s_a->idx_max) // 2 0 1
		ra(s_a);
	if (second->index == s_a->idx_max && last->index == s_a->idx_min) // 1 2 0
		rra(s_a);
	if (second->index == s_a->idx_min && last->index == s_a->idx_max) // 1 0 2 
		sa(s_a);   
	ft_printf("swap3\n");
}

// pareil que swap 3 mais on met les plus petit sur la stack b,
// faire un swap 2 sur la stack b de swap 5
void	swap_4(t_stack *stack_a, t_stack *stack_b)
{
	t_node	*current;

	current = stack_a->head;
	while ((current->index != 0) && current->next)
	{
		ra(stack_a);
		current = current->next;
	}
	print_lists(stack_a);
	print_lists(stack_b);

	pb(stack_a, stack_b);

	print_lists(stack_a);
	print_lists(stack_b);

	swap_3(stack_a, stack_b);

	print_lists(stack_a);
	print_lists(stack_b);

	pa(stack_a, stack_b);

	print_lists(stack_a);
	print_lists(stack_b);
	
	(void)stack_b;
}

void	swap_5(t_stack *stack_a, t_stack *stack_b)
{
	(void)stack_a;
	(void)stack_b;
}
