/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlichten <hlichten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 16:51:16 by hlichten          #+#    #+#             */
/*   Updated: 2025/03/30 16:08:21 by hlichten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_bool	is_different(t_node *node, long value)
{
	t_node	*tmp;

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
	char	*value;

	value = NULL;
	while (arg[*j])
	{
		while (arg[*j] == ' ')
			(*j)++;
		value = arg + *j;
		if (arg[*j] == '+' || arg[*j] == '-')
		{
			if (!ft_isdigit(arg[*j + 1]))
				ft_exit_success(stack_a);
			(*j)++;
		}
		while (ft_isdigit(arg[*j]))
			(*j)++;
		while (arg[*j] == ' ')
			(*j)++;
		return (ft_strndup(value, arg + *j - value));
	}
	return (NULL);
}

void	ps_parsing(char **av, t_stack *stack_a)
{
	char	*str;
	long	value;
	int		i;
	int		j;
	t_node	*new_node;

	i = 0;
	while (av[i] && av && av[i][0])
	{
		j = 0;
		check_valid_arg(av[i], stack_a);
		while (av[i][j])
		{
			str = create_value(av[i], stack_a, &j);
			if (!(*str))
				ft_exit_failure(stack_a);
			value = ft_atol(str);
			free(str);
			check_int_diff(value, stack_a);
			new_node = create_node((int)value);
			check_good(new_node, stack_a);
			insert_node_back(stack_a, new_node);
		}
		i++;
	}
}
