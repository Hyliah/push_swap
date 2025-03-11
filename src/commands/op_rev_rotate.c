/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_rev_rotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 17:17:07 by hlichten          #+#    #+#             */
/*   Updated: 2025/03/11 18:35:05 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    rra(t_stack *stack_a)
{
    t_node *prev_last;
    t_node *last;

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

	ft_printf("rra\n");
}

void    rrb(t_stack *stack_a, t_stack *stack_b)
{
	(void)stack_a;
	(void)stack_b;
	// rrb (reverse rotate b) : 
	// Décale d’une position vers le bas tous les élements de la pile b.
	// Le dernier élément devient le premier.
	ft_printf("rrb\n");
}

void    rrr(t_stack *stack_a, t_stack *stack_b)
{
	(void)stack_a;
	(void)stack_b;
	// rrr : rra et rrb en même temps.
	ft_printf("rrr\n");
}
