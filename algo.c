/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyazid-r <cyazid-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 17:22:20 by cyazid-r          #+#    #+#             */
/*   Updated: 2023/09/28 18:30:24 by cyazid-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

static int	ft_algo1(t_stack **sA, t_stack **sB, int sd, int ms)
{
	int	size;

	size = ft_size(*sA);
	while (size <= 6 && size > 3)
	{
		if ((*sA)->index < ms - 3)
		{
			pb(sA, sB);
			if ((*sB)->index <= sd)
				rb(sB);
		}
		else
			ra(sA);
		size = ft_size(*sA);
	}
	return (size);
}

void	ft_algo(t_stack **stackA, t_stack **stackB, int max_size)
{
	int	size;
	int	med;
	int	size_med;

	size = ft_size(*stackA);
	med = ft_med(*stackA);
	size_med = ft_med_med(*stackA);
	while (ft_run(*stackA, med) && size > 6)
	{
		if ((*stackA)->index <= med)
		{
			pb(stackA, stackB);
			if ((*stackB)->index <= size_med)
				rb(stackB);
		}
		else
			ra(stackA);
		size = ft_size(*stackA);
	}
	size = ft_algo1(stackA, stackB, size_med, max_size);
	if (size == 3)
		order(stackA);
	else
		ft_algo(stackA, stackB, max_size);
	return ;
}

void	ft_algo_back(t_stack **stackA, t_stack **stackB, int count)
{
	int	loca;

	while (count >= 0)
	{
		loca = ft_loca(*stackB, count);
		if ((*stackB)->index == count)
		{
			pa(stackA, stackB);
			count--;
		}
		else if ((*stackB)->next->index == count)
			sb(stackB);
		else if (loca == 1)
			rrb(stackB);
		else
			rb(stackB);
	}
	return ;
}

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
	{
		second_node = second_node->next;
	}
	first_node->next = NULL;
	second_node->next = *stackA;
	*stackA = temp_node;
	write(1, "ra\n", 3);
}
