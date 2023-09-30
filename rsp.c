/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rsp.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyazid-r <cyazid-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 17:17:23 by cyazid-r          #+#    #+#             */
/*   Updated: 2023/09/28 14:11:15 by cyazid-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_print_arr(int *arr, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		printf("%d ", arr[i]);
	i++;
	}
	printf("\n");
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

void	ft_print(t_stack *StackA)
{
	t_stack	*current;

	current = StackA;
	while (current != NULL)
	{
		printf("[%d|%d]", current->data, current->index);
		current = current->next;
	}
	printf(" | ");
}
