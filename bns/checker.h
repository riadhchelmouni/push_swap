/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyazid-r <cyazid-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 17:20:23 by cyazid-r          #+#    #+#             */
/*   Updated: 2023/09/28 20:51:54 by cyazid-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include "../libft/libft.h"

typedef struct s_stack
{
	int					data;
	int					index;
	struct s_stack		*next;
}						t_stack;

void	ra(t_stack **stackA);
void	rb(t_stack **stackA);
void	rr(t_stack **stackA, t_stack **stackB);
void	rra(t_stack **stackA);
void	rrb(t_stack **stackA);
void	rrr(t_stack **stackA, t_stack **stackB);
void	sa(t_stack **stackA);
void	sb(t_stack **stackA);
void	ss(t_stack **stackA, t_stack **stackB);
void	pa(t_stack **stackA, t_stack **stackB);
void	pb(t_stack **stackB, t_stack **stackA);
void	ft_print(t_stack *StackA);
char	*get_next_line(int fd);
int		ft_size(t_stack *stackA);
void	ft_fill_list_index(t_stack *stackA, int *arr);
void	ft_check(t_stack *stackA);
int		main(int ac, char **av);
t_stack	*new_node(long value, t_stack **stack);
t_stack	*ft_fill_stack(int ac, char **av);
void	swap(t_stack *a, t_stack *b);
int		*ft_sort(t_stack *StackA);
char	*reverse_string(char *str);
t_stack	*ft_fill_stack_b(int ac, char **av);
long	ft_atoi(const char *str);
char	**ft_split(char const *s, char c);
int		ft_strncmp(const char *s1, const char *s2, size_t size);

#endif
