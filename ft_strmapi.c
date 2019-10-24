/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strmapi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 13:32:09 by ladawi            #+#    #+#             */
/*   Updated: 2019/10/14 13:49:51 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		lenstr;
	int		i;

	if (s && f)
	{
		i = 0;
		lenstr = ft_strlen((char *)s);
		if (!(malloc(sizeof(char) * (lenstr + 1))))
			return (NULL);
		while (s[i] != 0)
		{
			str[i] = f(i, s[i]);
			i++;
		}
		return (str);
	}
	return (NULL);
}
