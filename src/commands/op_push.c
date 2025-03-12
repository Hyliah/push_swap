/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <hlichten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 21:55:11 by hlichten          #+#    #+#             */
/*   Updated: 2025/03/12 20:11:12 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack *stack_a, t_stack *stack_b)
{
	t_node	*to_move;

	if (!stack_b || !stack_b->head)
		return ;
	to_move = stack_b->head;
	stack_b->head = to_move->next;
	stack_a->head->prev = NULL;
	to_move->next = stack_a->head;
	stack_a->head = to_move;
	stack_b->cnt_node -= 1;
	stack_a->cnt_node += 1;
	update_min_max(stack_a, stack_b);
	ft_printf("pa\n");
}

void	pb(t_stack *stack_a, t_stack *stack_b)
{
	t_node	*to_move;

	if (!stack_a || !stack_a->head)
		return ;
	to_move = stack_a->head;
	stack_a->head = to_move->next;
	stack_a->head->prev = NULL;
	to_move->next = stack_b->head;
	stack_b->head = to_move;
	stack_a->cnt_node -= 1;
	stack_b->cnt_node += 1;
	update_min_max(stack_a, stack_b);
	ft_printf("pb\n");
}
