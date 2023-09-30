/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyazid-r <cyazid-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 16:30:49 by cyazid-r          #+#    #+#             */
/*   Updated: 2023/09/24 17:01:29 by cyazid-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

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
}

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

t_stack	*ft_fill_stack_b(int ac, char **av)
{
	int		value;
	t_stack	*stack;
	t_stack	*node;
	int		i;

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
