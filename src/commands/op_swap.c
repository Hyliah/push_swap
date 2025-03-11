/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 17:16:57 by hlichten          #+#    #+#             */
/*   Updated: 2025/03/11 18:23:39 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    sa(t_stack *stack_a)
{
	(void)stack_a;
	t_node *tmp;
    t_node *second;

    if (!stack_a || !stack_a->head || !stack_a->head->next)
        ft_exit_failure(stack_a);

    tmp = stack_a->head;        // Premier élément (ancien head)
    second = stack_a->head->next; // Deuxième élément

    // Swap : le deuxième devient le premier
    tmp->next = second->next;
    second->next = tmp;
    stack_a->head = second;

	// sa (swap a) : 
	// Intervertit les 2 premiers éléments au sommet de la pile a.
	// Ne fait rien s’il n’y en a qu’un ou aucun.
	ft_printf("sa\n");
}

void    sb(t_stack *stack_a, t_stack *stack_b)
{
	(void)stack_a;
	(void)stack_b;
	// sb (swap b ) : 
	// Intervertit les 2 premiers éléments au sommet de la pile b.
	// Ne fait rien s’il n’y en a qu’un ou aucun.
	ft_printf("sb\n");
}

void    ss(t_stack *stack_a, t_stack *stack_b)
{
	(void)stack_a;
	(void)stack_b;
	// ss : sa et sb en même temps.
	ft_printf("ss\n");
}


