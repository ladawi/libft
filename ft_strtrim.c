/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 11:01:02 by ladawi            #+#    #+#             */
/*   Updated: 2019/10/17 13:57:19 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int		is_char(char c, char *set)
{
	while (*set)
		if (c == *(set++))
			return (1);
	return (0);
}

int		trimstart(char const *s, char const *set)
{
	int		i;

	i = 0;
	while (is_char(s[i], (char *)set))
		i++;
	return (i);
}

int		trimend(char const *s, char const *set)
{
	int		e;

	e = ft_strlen(s) - 1;
	while (is_char(s[e], (char *)set))
		e--;
	e = (ft_strlen(s) - 1) - e;
	return (e);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str1;
	char	*str2;
	int		i;
	int		e;
	int		len;

	if (s1 == 0)
		return (ft_strdup(""));
	if (set == 0)
		return (ft_strdup(""));
	i = trimstart(s1, set);
	e = trimend(s1, set);
	len = ((ft_strlen(s1) - 1) - e);
	if (!(str1 = (char *)malloc(ft_strlen(s1) + 1)))
		return (0);
	if (i == ft_strlen(s1) && e == ft_strlen(s1))
		return (ft_strdup(""));
	ft_strlcpy(str1, s1, len + 1);
	while (i--)
		str1++;
	return (str1);
}
