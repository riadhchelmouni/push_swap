/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sss.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyazid-r <cyazid-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 17:20:10 by cyazid-r          #+#    #+#             */
/*   Updated: 2023/09/24 16:10:55 by cyazid-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	write(1, "rra\n", 4);
}

void	rrb(t_stack **stackA)
{
	t_stack	*last_node;
	t_stack	*second_last_node;

	second_last_node = NULL;
	last_node = *stackA;
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
	write(1, "rrb\n", 4);
}

static void	rrr1(t_stack *last_node, t_stack *second_last_node)
{
	second_last_node = last_node;
	last_node = last_node->next;
}

void	rrr(t_stack **stackA, t_stack **stackB)
{
	t_stack	*last_node;
	t_stack	*second_last_node;

	last_node = *stackA;
	second_last_node = NULL;
	if (*stackA == NULL || (*stackA)->next == NULL)
		return ;
	while (last_node->next != NULL)
		rrr1(last_node, second_last_node);
	second_last_node->next = NULL;
	last_node->next = *stackA;
	*stackA = last_node;
	last_node = *stackB;
	if (*stackB == NULL || (*stackB)->next == NULL)
		return ;
	while (last_node->next != NULL)
		rrr1(last_node, second_last_node);
	last_node->next = *stackB;
	*stackB = last_node;
	write(1, "rrr\n", 4);
}

void	sa(t_stack **stackA)
{
	t_stack	*top;
	t_stack	*second;

	top = *stackA;
	second = (*stackA)->next;
	if (*stackA == NULL || (*stackA)->next == NULL)
		return ;
	top->next = second->next;
	second->next = top;
	*stackA = second;
	write(1, "sa\n", 3);
}
