/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 09:59:14 by ladawi            #+#    #+#             */
/*   Updated: 2019/10/21 13:58:05 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

size_t	getelem(char *s, char c)
{
	int		i;
	int		nbr;

	i = -1;
	nbr = 0;
	while (s[++i])
	{
		if (s[i] != c)
		{
			nbr++;
			while (s[i] != c && s[i] != 0)
				i++;
		}
	}
	return (nbr);
}

int		getchar(char const *s, char c)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (s[i] != c && s[i] != 0)
	{
		i++;
		len++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		nelem;
	int		i;

	i = 0;
	nelem = getelem((char *)s, c);
	if (!(tab = (char **)malloc(sizeof(char *) * (nelem + 1))))
		return (NULL);
	tab[nelem] = 0;
	while (i < nelem)
	{
		while (*s == c)
			s++;
		if (!(tab[i] = ft_substr(s, 0, getchar(s, c))))
		{
			while (i-- > 0)
				free(tab[i]);
			free(tab);
			return (0);
		}
		while (*s != c && *s != 0)
			s++;
		i++;
	}
	return (tab);
}
