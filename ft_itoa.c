/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 12:47:17 by ladawi            #+#    #+#             */
/*   Updated: 2019/10/15 10:31:45 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

int		ft_len(long n)
{
	int		len;

	len = 0;
	if (n < 0)
	{
		n = n * -1;
		len++;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*c;
	long	nb;
	int		len;

	nb = n;
	len = ft_len(nb);
	if (!(c = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	c[len--] = '\0';
	if (n == 0)
	{
		c[0] = 48;
		return (c);
	}
	if (n < 0)
	{
		c[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		c[len--] = 48 + (n % 10);
		n /= 10;
	}
	return (c);
}
