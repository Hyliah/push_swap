/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 17:41:14 by hlichten          #+#    #+#             */
/*   Updated: 2025/03/11 18:30:15 by hlichten         ###   ########.fr       */
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

void	swap_3(t_stack *stack_a, t_stack *stack_b)
{
    t_node *second;
    t_node *last;

    second = stack_a->head->next; 
    last = second->next;
    if (stack_a->head->index == 0 && second->index == 1)
        end_program(stack_a, stack_b);
    if (second->index == 2 && last->index == 1) // 0 2 1 
    {
        sa(stack_a);
        ra(stack_a);
    }
    if (second->index == 1 && last->index == 0) // 2 1 0
    {
        ra(stack_a);
        sa(stack_a);
    }
    if (second->index == 0 && last->index == 1) // 2 0 1
        ra(stack_a);
    if (second->index == 2 && last->index == 0) // 1 2 0
        rra(stack_a);
    if (second->index == 0 && last->index == 2) // 1 0 2 
        sa(stack_a);   
}

// pareil que swap 3 mais on met les plus petit sur la stack b,
// faire un swap 2 sur la stack b de swap 5
void	swap_4(t_stack *stack_a, t_stack *stack_b)
{
   	(void)stack_a;
	(void)stack_b;
}

void	swap_5(t_stack *stack_a, t_stack *stack_b)
{
    (void)stack_a;
	(void)stack_b;
}
