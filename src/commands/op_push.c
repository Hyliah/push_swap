/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 21:55:11 by hlichten          #+#    #+#             */
/*   Updated: 2025/03/12 00:29:04 by hlichten         ###   ########.fr       */
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

	to_move->next = stack_a->head;
	stack_a->head = to_move;

	stack_b->cnt_node -= 1;
	stack_a->cnt_node += 1;
	
	// pa (push a) : 
	// Prend le premier élément au sommet de b et le met sur a.
	// Ne fait rien si b est vide.
	ft_printf("pa\n");
}

void	pb(t_stack *stack_a, t_stack *stack_b)
{
		t_node	*to_move;
		
	if (!stack_a || !stack_a->head)
		return ;

	to_move = stack_a->head;
	stack_a->head = to_move->next;

	to_move->next = stack_b->head;
	stack_b->head = to_move;

	stack_a->cnt_node -= 1;
	stack_b->cnt_node += 1;

	// pb (push b) : 
	// Prend le premier élément au sommet de a et le met sur b.
	// Ne fait rien si a est vide.
	ft_printf("pb\n");
}