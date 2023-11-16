/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lowarnie <lowarnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:20:09 by lowarnie          #+#    #+#             */
/*   Updated: 2023/11/08 13:52:09 by lowarnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	a;

	a = n;
	if (a < 0)
	{
		a = a * -1;
		ft_putchar_fd('-', fd);
	}
	if (a >= 0 && a <= 9)
		ft_putchar_fd(a + 48, fd);
	if (a >= 10)
	{
		ft_putnbr_fd(a / 10, fd);
		ft_putnbr_fd(a % 10, fd);
	}
}
