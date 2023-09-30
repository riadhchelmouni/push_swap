/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyazid-r <cyazid-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 17:24:17 by cyazid-r          #+#    #+#             */
/*   Updated: 2023/09/28 20:45:29 by cyazid-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	{
		second_node = second_node->next;
	}
	first_node->next = NULL;
	second_node->next = *stackA;
	*stackA = temp_node;
	write(1, "rb\n", 3);
}

void	ft_error2(void)
{
	ft_putstr_fd("Error\n", 2);
	exit(1);
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
	write(1, "rr\n", 3);
}

void	ft_check_dup(t_stack *stackA)
{
	t_stack	*temp1;
	t_stack	*temp2;

	temp1 = stackA;
	while (temp1)
	{
		temp2 = temp1->next;
		while (temp2)
		{
			if (temp1->data == temp2->data)
			{
				ft_putstr_fd("Error\n", 2);
				exit(1);
			}
			temp2 = temp2->next;
		}
		temp1 = temp1->next;
	}
}
