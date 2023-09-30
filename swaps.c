/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swaps.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyazid-r <cyazid-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 21:03:49 by cyazid-r          #+#    #+#             */
/*   Updated: 2023/09/28 20:46:57 by cyazid-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*reverse_string(char *str)
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	j = strlen(str) - 1;
	temp = (char *)malloc(sizeof(char) * (j + 1));
	while (i < strlen(str))
	{
		temp[i] = str[j];
		i++;
		j--;
	}
	temp[i] = '\0';
	return (temp);
}

void	ft_fill_list_index(t_stack *stackA, int *arr)
{
	int		i;
	int		size;
	t_stack	*current;

	i = 0;
	size = ft_size(stackA);
	current = stackA;
	while (current != NULL)
	{
		i = 0;
		while (i < size)
		{
			if (arr[i] == current->data)
				current->index = i;
			i++;
		}
		current = current->next;
	}
}

t_stack	*ft_fill_stack_b(int ac, char **av)
{
	t_stack	*stack;
	t_stack	*node;
	int		i;
	int		value;

	stack = NULL;
	i = ac - 1;
	while (i > 0)
	{
		value = ft_atoi(av[i]);
		node = (t_stack *)malloc(sizeof(t_stack));
		node->data = value;
		node->index = 0;
		node->next = stack;
		stack = node;
		i--;
	}
	return (stack);
}

t_stack	*new_node(long value, t_stack **stack)
{
	t_stack	*node;

	if (value > 2147483647 || value < -2147483648)
	{
		ft_putstr_fd("Error\n", 2);
		exit(1);
	}
	node = (t_stack *)malloc(sizeof(t_stack));
	node->data = value;
	node->index = 0;
	node->next = *stack;
	*stack = node;
	return (node);
}

void	sorte_2(t_stack **stack_a)
{
	if ((*stack_a)->data > (*stack_a)->next->data)
		sa(stack_a);
	else
		return ;
}
