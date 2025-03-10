/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 00:59:47 by hlichten          #+#    #+#             */
/*   Updated: 2025/03/10 21:39:59 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    init_list(t_stack *stack)
{
    stack->head = NULL;
    stack->cnt_node = 0;
    stack->index_max = 0;
    stack->inedx_min = 0;
}

void    clear_list(void)
{
    // suppression de la liste et de tous les noeuds et malloc
    // free
}