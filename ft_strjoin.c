/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 15:47:16 by ladawi            #+#    #+#             */
/*   Updated: 2019/10/15 13:52:59 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char *s2)
{
	int		len;
	char	*ptr;

	len = ft_strlen(s1) + ft_strlen(s2);
	if (!(ptr = (char *)malloc(len + 1)))
		return (NULL);
	ptr = ft_strdup(s1);
	ft_strlcat(ptr, s2, len);
	return (ptr);
}
