/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lowarnie <lowarnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 17:18:01 by lowarnie          #+#    #+#             */
/*   Updated: 2023/11/15 17:34:16 by lowarnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*b;

	b = (char *) s;
	i = 0;
	if (!(char) c)
		return (b + ft_strlen(s));
	while (b[i])
	{
		if (b[i] == (char)c)
			return (b + i);
		i++;
	}
	return (NULL);
}
