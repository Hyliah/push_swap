/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <hlichten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 17:31:09 by hlichten          #+#    #+#             */
/*   Updated: 2025/03/04 18:34:43 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    clear_list(void) //ex06
{
    // suppression de la liste et de tous les noeuds et malloc
    // free
}

t_stack    *new_elem(int *nb) // ex00
{
    t_stack *tmp;

    tmp = malloc(sizeof(t_stack));
    if (!tmp)
        return (NULL);
    
    tmp->nb = nb;
    tmp->next = NULL;
    return (tmp);
}

void    new_node(t_stack **stack_a, int *nb) // ex01 est ce que nb est en mode pointer ou en int ??? 
{
    t_stack *tmp;

    tmp = new_elem(nb);
    if (!tmp)
        return (0);
    if (*stack_a)
        tmp->next = *stack_a;
    stack_a = tmp;
}

