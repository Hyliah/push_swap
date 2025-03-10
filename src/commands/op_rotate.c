/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 17:17:03 by hlichten          #+#    #+#             */
/*   Updated: 2025/03/10 23:53:04 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ra(t_stack *stack_a)
{
	t_node *tmp;
    t_node *last;

    if (!stack_a || !stack_a->head)
        ft_exit_failure(stack_a);

    tmp = stack_a->head;       // Sauvegarde l'ancien premier élément
    stack_a->head = tmp->next; // Le deuxième élément devient le nouveau head
    tmp->next = NULL;          // L'ancien head devient le dernier, donc next = NULL

    // Trouver le dernier élément actuel
    last = stack_a->head;
    while (last->next)
        last = last->next;

    last->next = tmp; // Connecter l'ancien head à la fin

	// ra (rotate a) : 
	// Décale d’une position vers le haut tous les élements de la pile a.
	// Le premier élément devient le dernier.
	ft_printf("ra\n");
}
void    rb(t_stack *stack_a, t_stack *stack_b)
{
	(void)stack_a;
	(void)stack_b;
	// rb (rotate b) : 
	// Décale d’une position vers le haut tous les élements de la pile b.
	// Le premier élément devient le dernier.
	ft_printf("rb\n");
}

void    rr(t_stack *stack_a, t_stack *stack_b)
{
	(void)stack_a;
	(void)stack_b;
	// rr : ra et rb en même temps.
	ft_printf("rr\n");
}
