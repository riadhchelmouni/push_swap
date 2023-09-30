/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyazid-r <cyazid-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 10:26:49 by cyazid-r          #+#    #+#             */
/*   Updated: 2023/04/01 07:14:00 by cyazid-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *a, int b, size_t l)

{
	unsigned char	*p;

	p = (unsigned char *)a;
	while (l -- > 0)
		*(p++) = (unsigned char)b;
	return (a);
}
