/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lowarnie <lowarnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 10:58:25 by lowarnie          #+#    #+#             */
/*   Updated: 2023/11/16 14:03:10 by lowarnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*str;

	if (!nmemb || !size)
		return (malloc(0));
	if (nmemb * size / nmemb != size)
		return (0);
	str = (void *)malloc(size * nmemb);
	if (!str)
		return (NULL);
	else
		ft_bzero(str, nmemb * size);
	return (str);
}
