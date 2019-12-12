/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 15:11:16 by ladawi            #+#    #+#             */
/*   Updated: 2019/12/12 15:46:42 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if (s == 0)
		return (NULL);
	if (!(str = (char*)malloc(sizeof(char) * (len + 1))))
		return (0);
	ft_bzero(str, len + 1);
	if (start > ft_strlen(s))
		return (str);
	ft_strlcpy(str, s + start, len + 1);
	return (str);
}
