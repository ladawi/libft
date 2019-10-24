/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 12:02:52 by ladawi            #+#    #+#             */
/*   Updated: 2019/10/11 14:54:59 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlen(const char *s)
{
	char	*ptr;
	int		len;

	len = 0;
	ptr = (char *)s;
	while (*ptr++ != 0)
		len++;
	return (len);
}
