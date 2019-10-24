/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 15:11:16 by ladawi            #+#    #+#             */
/*   Updated: 2019/10/11 13:37:22 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	char	*s2;

	s2 = (char *)s + start;
	if (!(ptr = (char *)malloc(len + 1)))
		return (0);
	ft_strlcpy(ptr, s2, len);
	return (ptr);
}
