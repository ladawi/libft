/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 11:36:28 by ladawi            #+#    #+#             */
/*   Updated: 2019/10/10 13:52:55 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	int		tmp;
	int		i;
	char	*ptr;

	ptr = (char *)s1;
	tmp = 0;
	i = 0;
	if (ft_strlen(s2) == 1)
		return (ptr = ft_strchr(s1, (int)s2));
	if (ft_strlen(s2) == 0)
		return ((char *)s1);
	while (len--)
	{
		(s1[i] == s2[tmp]) ? tmp++ : 0;
		i++;
		(s1[i] != s2[tmp]) ? (tmp = 0) : (0);
		if (tmp == ft_strlen(s2) - 1)
		{
			while ((i--) - tmp)
				ptr++;
			return (ptr);
		}
	}
	return (0);
}
