/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <hlichten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 17:16:57 by hlichten          #+#    #+#             */
/*   Updated: 2025/03/04 18:34:26 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    sa(t_stack *stack_a, t_stack *stack_b)
{
    // sa (swap a) : 
    // Intervertit les 2 premiers éléments au sommet de la pile a.
    // Ne fait rien s’il n’y en a qu’un ou aucun.
    ft_printf("sa\n");
}

void    sb(t_stack *stack_a, t_stack *stack_b)
{
    // sb (swap b ) : 
    // Intervertit les 2 premiers éléments au sommet de la pile b.
    // Ne fait rien s’il n’y en a qu’un ou aucun.
    ft_printf("sb\n");
}

void    ss(t_stack *stack_a, t_stack *stack_b)
{
    // ss : sa et sb en même temps.
    ft_printf("ss\n");
}

void    pa(t_stack *stack_a, t_stack *stack_b)
{
    // pa (push a) : 
    // Prend le premier élément au sommet de b et le met sur a.
    // Ne fait rien si b est vide.
    ft_printf("pa\n");
}

void    pb(t_stack *stack_a, t_stack *stack_b)
{
    // pb (push b) : 
    // Prend le premier élément au sommet de a et le met sur b.
    // Ne fait rien si a est vide.
    ft_printf("pb\n");
}

