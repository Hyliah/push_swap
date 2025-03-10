/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 21:55:11 by hlichten          #+#    #+#             */
/*   Updated: 2025/03/10 21:56:03 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack *stack_a, t_stack *stack_b)
{
    (void)stack_a;
	(void)stack_b;
    // pa (push a) : 
    // Prend le premier élément au sommet de b et le met sur a.
    // Ne fait rien si b est vide.
	ft_printf("pa\n");
}

void	pb(t_stack *stack_a, t_stack *stack_b)
{
    (void)stack_a;
	(void)stack_b;
    // pb (push b) : 
    // Prend le premier élément au sommet de a et le met sur b.
    // Ne fait rien si a est vide.
	ft_printf("pb\n");
}