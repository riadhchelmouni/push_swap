/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyazid-r <cyazid-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 16:43:13 by cyazid-r          #+#    #+#             */
/*   Updated: 2023/03/25 09:44:25 by cyazid-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))

{
	int		i;
	char	*rn;

	if (!s)
		return (NULL);
	i = 0;
	rn = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (rn == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		rn[i] = f(i, s[i]);
		i++;
	}
	rn[i] = '\0';
	return (rn);
}
