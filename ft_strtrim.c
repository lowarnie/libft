/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lowarnie <lowarnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:24:31 by lowarnie          #+#    #+#             */
/*   Updated: 2023/11/16 14:31:27 by lowarnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_set(char s1, char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == s1)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;
	char			*res;

	i = 0;
	j = ft_strlen(s1) - 1;
	while (is_set(s1[i], (char *)set) == 1)
		i++;
	if (i == ft_strlen((char *)s1))
		return (ft_strdup(""));
	while (is_set(s1[j], (char *)set) == 1)
		j--;
	res = malloc (sizeof(char) * (j - i + 2));
	if (!res)
		return (NULL);
	k = 0;
	while (i <= j)
	{
		res[k] = s1[i];
		i ++;
		k++;
	}
	res[k] = '\0';
	return (res);
}
/*char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s2;
	int		i;
	int		j;
	int		len;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	i = 0;
	while (ft_strchr(set, s1[i]) && s1[i] != '\0')
		i++;
	j = ft_strlen(s1);
	while (ft_strchr(set, s1[j]) && j > i)
		j--;
	if (j == 0)
		return (ft_strdup(s1));
	len = j - i + 1;
	s2 = malloc(sizeof(char) * len + 1);
	if (!s2)
		return (NULL);
	ft_memcpy(s2, s1 + i, len);
	s2[len] = '\0';
	return (s2);
}*/
