/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyazid-r <cyazid-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 16:41:52 by cyazid-r          #+#    #+#             */
/*   Updated: 2023/09/28 19:51:24 by cyazid-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ra(t_stack **stackA)
{
	t_stack	*temp_node;
	t_stack	*first_node;
	t_stack	*second_node;

	temp_node = *stackA;
	first_node = *stackA;
	second_node = (*stackA)->next;
	temp_node = second_node;
	if (*stackA == NULL || (*stackA)->next == NULL)
		return ;
	while (second_node->next != NULL)
		second_node = second_node->next;
	first_node->next = NULL;
	second_node->next = *stackA;
	*stackA = temp_node;
}

void	rb(t_stack **stackA)
{
	t_stack	*temp_node;
	t_stack	*first_node;
	t_stack	*second_node;

	temp_node = *stackA;
	first_node = *stackA;
	second_node = (*stackA)->next;
	temp_node = second_node;
	if (*stackA == NULL || (*stackA)->next == NULL)
		return ;
	while (second_node->next != NULL)
		second_node = second_node->next;
	first_node->next = NULL;
	second_node->next = *stackA;
	*stackA = temp_node;
}

void	rr(t_stack **stackA, t_stack **stackB)
{
	t_stack	*first_node;
	t_stack	*second_node;

	first_node = *stackA;
	second_node = (*stackA)->next;
	if (*stackA == NULL || (*stackA)->next == NULL)
		return ;
	while (second_node->next != NULL)
	{
		first_node = second_node;
		second_node = second_node->next;
	}
	first_node->next = NULL;
	second_node->next = *stackA;
	*stackA = second_node;
}

void	rra(t_stack **stackA)
{
	t_stack	*last_node;
	t_stack	*second_last_node;

	last_node = *stackA;
	second_last_node = NULL;
	if (*stackA == NULL || (*stackA)->next == NULL)
		return ;
	while (last_node->next != NULL)
	{
		second_last_node = last_node;
		last_node = last_node->next;
	}
	second_last_node->next = NULL;
	last_node->next = *stackA;
	*stackA = last_node;
}

int	ft_size(t_stack *stackA)
{
	int		i;
	t_stack	*current;

	current = stackA;
	i = 0;
	while (current)
	{
		if (current->data > 2147483647 || current->data < -2147483648)
		{
			ft_putstr_fd("Error\n", 2);
			exit(1);
		}
		current = current->next;
		i++;
	}
	return (i);
}
