/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyazid-r <cyazid-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 17:18:37 by cyazid-r          #+#    #+#             */
/*   Updated: 2023/09/28 20:46:05 by cyazid-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sb(t_stack **stackA)
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
	write(1, "sb\n", 3);
}

void	ss(t_stack **stackA, t_stack **stackB)
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
	top = *stackB;
	second = (*stackB)->next;
	if (*stackB == NULL || (*stackB)->next == NULL)
		return ;
	top->next = second->next;
	second->next = top;
	*stackB = second;
	write(1, "ss\n", 3);
}

void	pa(t_stack **stackA, t_stack **stackB)
{
	t_stack	*node_to_move;

	node_to_move = *stackB;
	if (*stackB == NULL)
		return ;
	*stackB = (*stackB)->next;
	node_to_move->next = *stackA;
	*stackA = node_to_move;
	write(1, "pa\n", 3);
}

void	pb(t_stack **stackB, t_stack **stackA)
{
	t_stack	*node_to_move;

	node_to_move = *stackB;
	if (*stackB == NULL)
		return ;
	*stackB = (*stackB)->next;
	node_to_move->next = *stackA;
	*stackA = node_to_move;
	write(1, "pb\n", 3);
}

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	int		*array;
	int		size;

	if (ac < 2)
		return (0);
	stack_a = ft_fill_stack(ac, av);
	ft_check_dup(stack_a);
	size = ft_size(stack_a);
	stack_b = NULL;
	array = ft_sort(stack_a);
	ft_fill_list_index(stack_a, array);
	if (size <= 2)
	{
		if (size < 2)
			return (0);
		sorte_2(&stack_a);
		return (0);
	}
	if (a_order(stack_a) == 1)
		return (0);
	ft_algo(&stack_a, &stack_b, ft_size(stack_a));
	ft_algo_back(&stack_a, &stack_b, size - 4);
	return (0);
}
