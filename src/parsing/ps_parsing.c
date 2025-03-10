/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 16:51:16 by hlichten          #+#    #+#             */
/*   Updated: 2025/03/10 22:31:11 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_bool is_different(t_node *node, long value)
{
	t_node *tmp;

	tmp = node;
	while (tmp != NULL)
	{	
		if (tmp->value == value)
			return (FALSE);
		tmp = tmp->next;
	}
	return (TRUE);
}

t_bool	is_valid_argument(char *arg)
{
	int		i;

	i = 0;
	while (arg[i])
	{
		if (!ft_isdigit(arg[i]) && arg[i] != ' ' 
			&& arg[i] != '-' && arg[i] != '+')
			return (FALSE);
		i++;
	}
	return (TRUE);
}

char	*create_value(char *arg, t_stack *stack_a, int *j)
{
	char		*value;

	value = NULL;
	while(arg[*j])
	{
		while(arg[*j] == ' ')
			(*j)++;
		value = arg + *j;
		if(arg[*j] == '+' || arg[*j] == '-')
		{
			if (!ft_isdigit(arg[*j + 1]))
				ft_exit_success(stack_a);
				//ft_free(&stack_a);
			(*j)++;
		}
		while(ft_isdigit(arg[*j]))
			(*j)++;
		while(arg[*j] == ' ')
			(*j)++;
		return(ft_strndup(value, arg + *j - value));
	}
	return (NULL);
}


void ps_parsing(char **av, t_stack *stack_a)
{
	char	*str;
	long    value;
	int     i;
	int		j;
	t_node	*new_node;

	i = 0;
	while (av[i] && av && av[i][0])
	{
		if (!is_valid_argument(av[i]))
			ft_exit_success(stack_a);
			//ft_free(&stack_a); // check si les arg valides sinon on free
		j = 0;
		while (av[i][j])
		{
			str = create_value(av[i], stack_a, &j);
			if(!(*str))
				return ;
			value = ft_atol(str); // char devient integer 
			if (value > INT_MAX || value < INT_MIN)
				ft_exit_success(stack_a);
				//ft_free(&stack_a);
			if  (!is_different(stack_a->head, value))
				ft_exit_success(stack_a);
				//ft_free(&stack_a);
			new_node = create_node((int)value);
			if(!new_node)
				ft_free(&stack_a);
			insert_node_back(stack_a, new_node);
		}
		i++;  
	}
}
