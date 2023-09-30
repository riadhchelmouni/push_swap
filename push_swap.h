/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyazid-r <cyazid-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 15:40:30 by cyazid-r          #+#    #+#             */
/*   Updated: 2023/09/28 21:02:37 by cyazid-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include "./libft/libft.h"

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
int		ft_size(t_stack *stackA);
long	ft_atoi(const char *str);
char	**ft_split(char const *s, char c);
int		ft_strncmp(const char *s1, const char *s2, size_t size);
t_stack	*new_node(long value, t_stack **stack);
t_stack	*ft_fill_stack(int ac, char **av);
void	ft_algo(t_stack **stackA, t_stack **stackB, int max_size);
void	ft_algo_back(t_stack **stackA, t_stack **stackB, int count);
int		ft_med(t_stack *stackA);
int		ft_med_med(t_stack *stackA);
int		ft_run(t_stack *stackA, int med);
int		ft_pos(int loca, int size);
int		ft_loca(t_stack *stackA, int ind);
int		a_order(t_stack *stackA);
void	order(t_stack **stackA);
int		main(int ac, char **av);
void	ft_print_arr(int *arr, int size);
int		*ft_sort(t_stack *StackA);
char	*reverse_string(char *str);
void	ft_fill_list_index(t_stack *stackA, int *arr);
t_stack	*ft_fill_stack_b(int ac, char **av);
void	sorte_2(t_stack **stack_a);
void	ft_check_dup(t_stack *stackA);

#endif
