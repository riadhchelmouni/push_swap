/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyazid-r <cyazid-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 10:56:06 by cyazid-r          #+#    #+#             */
/*   Updated: 2023/03/25 09:49:39 by cyazid-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))

{
	int	i;
	int	a;

	i = 0;
	a = 0;
	if (s != NULL && f != NULL)
	{
		i = ft_strlen(s);
		while (a < i)
		{
			(*f)(a, s);
			s++;
			a++;
		}
	}
}
