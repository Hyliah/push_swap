/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <hlichten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 17:31:09 by hlichten          #+#    #+#             */
/*   Updated: 2025/03/04 18:01:51 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    clear_list(void) //ex06
{
    // suppression de la liste et de tous les noeuds et malloc
    // free
}

void    *new_elem(int nb) // ex00
{
    t_stack *tmp;

    tmp = malloc(sizeof(t_stack));
    if (!tmp)
        return (NULL);
    
    tmp->nb = nb;
    tmp->next = NULL;
}
void    new_node(void) // ex01
{
    // mise en place de l element sur le haut de la liste
}

