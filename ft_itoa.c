/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lowarnie <lowarnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:34:20 by lowarnie          #+#    #+#             */
/*   Updated: 2023/11/08 13:34:28 by lowarnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	calc_length(long n)
{
	long	i;

	i = 0;
	if (n < 0)
	{
		n = n * (-1);
		i++;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long	i;
	long	nbr;
	char	*str;

	nbr = n;
	i = calc_length(nbr);
	if (nbr == 0)
		return (ft_strdup("0"));
	str = malloc(sizeof(char) * i + 1);
	if (!str)
		return (NULL);
	else if (nbr < 0)
	{
		str[0] = '-';
		nbr = nbr * (-1);
	}
	str[i] = '\0';
	i--;
	while (nbr > 0)
	{
		str[i] = (nbr % 10) + 48;
		nbr = nbr / 10;
		i--;
	}
	return (str);
}
