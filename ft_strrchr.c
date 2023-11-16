/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lowarnie <lowarnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 17:22:49 by lowarnie          #+#    #+#             */
/*   Updated: 2023/11/16 14:43:30 by lowarnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*b;

	b = (char *) s;
	i = ft_strlen(b);
	if (!(char)c)
		return (b + ft_strlen(s));
	while (i >= 0)
	{
		if (b[i] == ((char)c))
			return (b + i);
		i--;
	}
	return (NULL);
}
