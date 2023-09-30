/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyazid-r <cyazid-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 15:43:59 by cyazid-r          #+#    #+#             */
/*   Updated: 2023/04/03 05:26:48 by cyazid-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))

{
	t_list	*n_lst;
	t_list	*tmp;

	if (!lst || !f)
		return (NULL);
	n_lst = NULL;
	while (lst)
	{
		tmp = ft_lstnew((*f)(lst -> content));
		if (!tmp)
		{
			while (n_lst)
			{
				tmp = n_lst -> next;
				(*del)(n_lst -> content);
				free(n_lst);
				n_lst = tmp;
			}
			lst = NULL;
			return (NULL);
		}
		ft_lstadd_back (&n_lst, tmp);
		lst = lst -> next;
	}
	return (n_lst);
}
