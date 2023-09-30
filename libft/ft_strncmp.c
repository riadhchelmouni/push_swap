/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyazid-r <cyazid-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 10:19:59 by cyazid-r          #+#    #+#             */
/*   Updated: 2023/03/25 09:42:34 by cyazid-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *ri, const char *ya, size_t n)

{
	size_t	a;

	a = 0;
	if (n == 0)
		return (0);
	while (a < n - 1 && ri[a] != '\0' && ya[a] != '\0' && ri[a] == ya[a])
		a++;
	return ((unsigned char)ri[a] - (unsigned char)ya[a]);
}
