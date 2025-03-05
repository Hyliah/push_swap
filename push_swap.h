/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 17:16:46 by hlichten          #+#    #+#             */
/*   Updated: 2025/03/05 00:58:45 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h> //int min & max macros

typedef struct s_stack
{
    int				value;
	int				index;
	int				push_cost;
	int				top_median;
	int				cheapest;
	
    struct s_stack	*next;
    struct s_stack	*prev;
	struct s_stack	*target_node;
    
}   t_stack; // petit nom sympa qui permet d utiliser sans -> struct <- s_stack

#endif