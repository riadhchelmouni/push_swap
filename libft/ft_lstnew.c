/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyazid-r <cyazid-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 09:36:16 by cyazid-r          #+#    #+#             */
/*   Updated: 2023/03/28 10:28:12 by cyazid-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)

{
	t_list	*rn;

	rn = (t_list *)malloc(sizeof(t_list));
	if (!rn)
		return (rn = NULL);
	rn->next = NULL;
	rn->content = content;
	return (rn);
}
