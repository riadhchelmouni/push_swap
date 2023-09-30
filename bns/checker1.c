/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyazid-r <cyazid-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 16:28:42 by cyazid-r          #+#    #+#             */
/*   Updated: 2023/09/28 20:52:35 by cyazid-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_fill_list_index(t_stack *stackA, int *arr)
{
	int		i;
	int		size;
	t_stack	*current;

	i = 0;
	size = ft_size(stackA);
	current = stackA;
	while (current != NULL)
	{
		i = 0;
		while (i < size)
		{
			if (arr[i] == current->data)
				current->index = i;
			i++;
		}
		current = current->next;
	}
}

void	ft_check(t_stack *stackA)
{
	int		i;
	t_stack	*current;

	i = 0;
	current = stackA;
	while (current)
	{
		if (current->index != i)
		{
			write(1, "KO\n", 3);
			return ;
		}
		current = current->next;
		i++;
	}
	write(1, "OK\n", 3);
	return ;
}

static void	main1(t_stack **stackA, t_stack **stackB, char *line)
{
	if (strncmp(line, "sa\n", 3) == 0)
		sa(stackA);
	else if (strncmp(line, "ra\n", 3) == 0)
		ra(stackA);
	else if (strncmp(line, "rra\n", 4) == 0)
		rra(stackA);
	else if (strncmp(line, "pa\n", 3) == 0)
		pa(stackA, stackB);
	else if (strncmp(line, "sb\n", 3) == 0)
		sb(stackB);
	else if (strncmp(line, "rb\n", 3) == 0)
		rb(stackB);
	else if (strncmp(line, "rrb\n", 4) == 0)
		rrb(stackB);
	else if (strncmp(line, "pb\n", 3) == 0)
		pb(stackA, stackB);
	else if (strncmp(line, "rr\n", 3) == 0)
		rr(stackA, stackB);
	else if (strncmp(line, "rrr\n", 3) == 0)
		rrr(stackA, stackB);
	else if (strncmp(line, "ss\n", 3) == 0)
		ss(stackA, stackB);
	else
		write(2, "Error\n", 6);
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

int	main(int ac, char **av)
{
	int		fd;
	char	*line;
	t_stack	*stack_a;
	t_stack	*stack_b;
	int		*array;

	line = NULL;
	stack_a = ft_fill_stack(ac, av);
	ft_check_dup(stack_a);
	stack_b = NULL;
	array = ft_sort(stack_a);
	ft_fill_list_index(stack_a, array);
	line = get_next_line(fd);
	while (line)
	{
		main1(&stack_a, &stack_b, line);
		line = get_next_line(fd);
	}
	ft_check(stack_a);
}
