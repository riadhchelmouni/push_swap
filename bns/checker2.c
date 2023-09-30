/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyazid-r <cyazid-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 16:30:07 by cyazid-r          #+#    #+#             */
/*   Updated: 2023/09/28 20:53:32 by cyazid-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

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

t_stack	*ft_fill_stack(int ac, char **av)
{
	t_stack	*stack;
	t_stack	*node;
	int		j;
	int		i;
	char	**token;

	stack = NULL;
	j = 0;
	i = ac - 1;
	if (ac > 2)
	{
		while (i > 0)
			node = new_node(ft_atoi(av[i--]), &stack);
	}
	else
	{
		token = ft_split(av[1], ' ');
		if (!*token)
			return (NULL);
		while (token[j + 1])
			j++;
		while (j >= 0)
			node = new_node(ft_atoi(token[j--]), &stack);
	}
	return (stack);
}

void	swap(t_stack *a, t_stack *b)
{
	int	temp_data;
	int	temp_index;

	temp_data = a->data;
	temp_index = a->index;
	a->data = b->data;
	a->index = b->index;
	b->data = temp_data;
	b->index = temp_index;
}

static void	ft_sort1(int count, t_stack *arr, t_stack *stackA)
{
	int	i;
	int	j;

	i = 0;
	while (i < count)
	{
		arr[i++] = *stackA;
		stackA = stackA->next;
	}
	i = -1;
	while (++i < count - 1)
	{
		j = -1;
		while (++j < count - i - 1)
		{
			if (arr[j].data > arr[j + 1].data)
				swap(&arr[j], &arr[j + 1]);
		}
	}
}

int	*ft_sort(t_stack *StackA)
{
	int		i;
	int		count;
	t_stack	*temp;
	t_stack	*arr;
	int		*sorted_data;

	count = 0;
	temp = StackA;
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	arr = (t_stack *)malloc(count * sizeof(t_stack));
	ft_sort1(count, arr, StackA);
	sorted_data = (int *)malloc(count * sizeof(int));
	i = -1;
	while (++i < count)
		sorted_data[i] = arr[i].data;
	return (free(arr), sorted_data);
}
