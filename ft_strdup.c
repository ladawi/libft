/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 14:56:57 by ladawi            #+#    #+#             */
/*   Updated: 2019/10/14 14:41:39 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	int		slen;
	char	*ptr;

	slen = ft_strlen(s) + 1;
	if (!(ptr = malloc(slen)))
		return (NULL);
	ft_memcpy(ptr, s, slen);
	ptr[slen] = 0;
	return (ptr);
}
