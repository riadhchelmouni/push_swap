/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ored.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyazid-r <cyazid-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 17:16:27 by cyazid-r          #+#    #+#             */
/*   Updated: 2023/09/28 14:13:23 by cyazid-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_loca(t_stack *stackA, int ind)
{
	t_stack	*current;
	int		i;

	current = stackA;
	i = 0;
	while (current)
	{
		if (current->index == ind)
			return (ft_pos(i, ft_size(stackA)));
		current = current->next;
		i++;
	}
	return (-1);
}

int	a_order(t_stack *stackA)
{
	t_stack	*current;

	current = stackA;
	while (current->next != NULL && ft_size(stackA) > 2)
	{
		if (current->index > current->next->index)
			return (0);
		current = current->next;
	}
	return (1);
}

static void	do_order(t_stack **stackA, int flag)
{
	if (flag == 1)
		rra(stackA);
	else if (flag == 2)
		sa(stackA);
	else if (flag == 3)
		ra(stackA);
	else if (flag == 4)
	{
		ra(stackA);
		sa(stackA);
	}
	else if (flag == 5)
	{
		rra(stackA);
		sa(stackA);
	}
}

static void	order1(t_stack **stackA)
{
	if ((*stackA)->data < (*stackA)->next->data && (*stackA)->data
		> (*stackA)->next->next->data && (*stackA)->next->data
		> (*stackA)->next->next->data)
		do_order(stackA, 1);
	else if ((*stackA)->data > (*stackA)->next->data && (*stackA)->data
		< (*stackA)->next->next->data && (*stackA)->next->data
		< (*stackA)->next->next->data)
		do_order(stackA, 2);
	else if ((*stackA)->data > (*stackA)->next->data && (*stackA)->data
		> (*stackA)->next->next->data && (*stackA)->next->data
		< (*stackA)->next->next->data)
		do_order(stackA, 3);
	else if ((*stackA)->data > (*stackA)->next->data && (*stackA)->data
		> (*stackA)->next->next->data && (*stackA)->next->data
		> (*stackA)->next->next->data)
		do_order(stackA, 4);
	else if ((*stackA)->data < (*stackA)->next->data && (*stackA)->data
		< (*stackA)->next->next->data && (*stackA)->next->data
		> (*stackA)->next->next->data)
		do_order(stackA, 5);
}

void	order(t_stack **stackA)
{
	int	mem;

	mem = a_order(*stackA);
	if (mem == 0 && ft_size(*stackA) == 3)
	{
		order1(stackA);
	}
	else if (mem == 0 && ft_size(*stackA) == 2)
	{
		if ((*stackA)->data > (*stackA)->next->data)
			sa(stackA);
	}
}
