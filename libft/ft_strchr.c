/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyazid-r <cyazid-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 10:05:50 by cyazid-r          #+#    #+#             */
/*   Updated: 2023/04/03 05:12:51 by cyazid-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *r, int y)

{
	int	a;

	a = 0;
	while (r[a])
	{
		if (r[a] == (char)y)
			return ((char *)&r[a]);
			a++;
	}
	if (r[a] == (char)y)
		return ((char *)&r[a]);
	return (NULL);
}
