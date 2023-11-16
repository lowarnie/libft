/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lowarnie <lowarnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:36:33 by lowarnie          #+#    #+#             */
/*   Updated: 2023/11/08 13:36:50 by lowarnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_actualword(char const *s, int nextword, char c)
{
	int	i;

	i = nextword;
	while (s[i] != '\0' && s[i] == c)
		i++;
	return (i);
}

int	ft_nextword(char const *s, int actualword, char c)
{
	int	i;

	i = actualword;
	while (s[i] != '\0' && s[i] != c)
		i++;
	return (i);
}

int	count_str(char const *s, char c)
{
	int	i;
	int	words_count;

	i = 0;
	words_count = 0;
	while (s[i] == c && s[i])
		i++;
	while (s[i] != '\0')
	{
		words_count++;
		while (s[i] != c && s[i])
			i++;
		if (s[i] == c && s[i])
		{
			while (s[i] == c && s[i])
				i++;
		}
	}
	return (words_count);
}

char	**ft_split(char const *s, char c)
{
	char	**str_of_str;
	int		i;
	int		n;
	int		actualword;
	int		nextword;

	actualword = 0;
	nextword = 0;
	n = 0;
	i = count_str(s, c);
	str_of_str = malloc(sizeof(char *) * (i + 1));
	while (n < i)
	{
		actualword = ft_actualword(s, nextword, c);
		nextword = ft_nextword(s, actualword, c);
		str_of_str[n] = malloc(sizeof(char) * (nextword - actualword + 1));
		ft_strlcpy(str_of_str[n], s + actualword, (nextword - actualword + 1));
		n++;
	}
	str_of_str[n] = 0;
	return (str_of_str);
}
