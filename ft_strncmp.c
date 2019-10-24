/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 14:59:56 by ladawi            #+#    #+#             */
/*   Updated: 2019/10/17 13:50:41 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strncmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ps1;
	unsigned char	*ps2;

	ps1 = (unsigned char *)s1;
	ps2 = (unsigned char *)s2;
	while (n-- > 0)
	{
		if (*ps1 != *ps2)
			return (*ps1 - *ps2);
		else
		{
			ps1++;
			ps2++;
		}
		if (*ps1 == 0 | *ps2 == 0)
			return (0);
	}
	return (0);
}
