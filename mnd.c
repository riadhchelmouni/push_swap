/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mnd.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyazid-r <cyazid-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 17:15:12 by cyazid-r          #+#    #+#             */
/*   Updated: 2023/09/28 19:20:15 by cyazid-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

int	ft_med(t_stack *stackA)
{
	t_stack	*current;
	int		min;
	int		max;
	int		res;

	current = stackA;
	min = stackA->index;
	max = stackA->index;
	while (current)
	{
		if (min > current->index)
			min = current->index;
		if (max < current->index)
			max = current->index;
		current = current->next;
	}
	res = max + min;
	if (res % 2 != 0)
		res++;
	return (res / 2);
}

int	ft_med_med(t_stack *stackA)
{
	t_stack	*current;
	int		min;
	int		max;
	int		res;

	current = stackA;
	min = stackA->index;
	max = stackA->index;
	while (current)
	{
		if (min > current->index)
			min = current->index;
		if (max < current->index)
			max = current->index;
		current = current->next;
	}
	res = (max + min);
	if (res % 2 != 0)
		res++;
	res = res / 2;
	res = res - ((res - min) / 2);
	return (res);
}

int	ft_run(t_stack *stackA, int med)
{
	t_stack	*current;

	current = stackA;
	while (current->next)
	{
		if (current->index <= med)
			return (1);
		current = current->next;
	}
	if (current->index <= med)
		return (1);
	return (0);
}

int	ft_pos(int loca, int size)
{
	if ((size / 2) > loca)
		return (0);
	else
		return (1);
}
