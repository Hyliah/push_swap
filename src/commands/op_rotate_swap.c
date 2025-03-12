/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_rotate_swap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <hlichten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 19:17:20 by hlichten          #+#    #+#             */
/*   Updated: 2025/03/12 20:11:54 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *stack_a)
{
	t_node	*tmp;
	t_node	*second;

	if (!stack_a || !stack_a->head)
		ft_exit_failure(stack_a);
	tmp = stack_a->head;
	second = stack_a->head->next;
	tmp->next = second->next;
	second->next = tmp;
	stack_a->head = second;
	stack_a->head->prev = NULL;
	stack_a->head->next->prev = stack_a->head;
	stack_a->head->next->next->prev = stack_a->head->next;
	ft_printf("sa\n");
}

void	ra(t_stack *stack_a)
{
	t_node	*tmp;
	t_node	*last;

	if (!stack_a || !stack_a->head)
		ft_exit_failure(stack_a);
	last = stack_a->head;
	while (last->next)
		last = last->next;
	tmp = stack_a->head;
	stack_a->head = stack_a->head->next;
	tmp->next = NULL;
	last->next = tmp;
	tmp->prev = last;
	stack_a->head->prev = NULL;
	ft_printf("ra\n");
}

void	rra(t_stack *stack_a)
{
	t_node	*prev_last;
	t_node	*last;

	if (!stack_a || !stack_a->head || !stack_a->head->next)
		ft_exit_failure(stack_a);
	prev_last = NULL;
	last = stack_a->head;
	while (last->next)
	{
		prev_last = last;
		last = last->next;
	}
	prev_last->next = NULL;
	last->next = stack_a->head;
	stack_a->head = last;
	stack_a->head->next->prev = stack_a->head;
	stack_a->head->prev = NULL;
	ft_printf("rra\n");
}
