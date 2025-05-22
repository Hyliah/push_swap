t_bool	check_if_sorted(t_stack *stack_a)
{
	t_node	*current;

	current = stack_a->head;
	while (current->next)
	{
		if (current->value < current->next->value)
			current = current->next;
		else 
			return (FALSE);
	}
	return (TRUE);
}

