/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 14:01:17 by ladawi            #+#    #+#             */
/*   Updated: 2019/10/15 10:23:48 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <math.h>

int	ft_check(const char *nptr, int special, int i)
{
	while (i--)
	{
		if (nptr[i] == '-')
		{
			if (nptr[i - 1] == '+' || nptr[i - 1] == '-')
				return (0);
		}
		if (nptr[i] == '+')
		{
			if (nptr[i - 1] == '+' || nptr[i - 1] == '-')
				return (0);
		}
		else if (ft_isdigit(nptr[i]) == 0
			&& nptr[i] != '-' && nptr[i] != ' ' && nptr[i] != '+')
			return (0);
		if (nptr[i] == '-' || nptr[i] == ' ' || nptr[i] == '+')
			special++;
	}
	return (special + 1);
}

int	ft_neg(const char *nptr, int i)
{
	while (i--)
	{
		if (nptr[i] == '-')
			return (-1);
	}
	return (1);
}

int	ft_atoi(const char *nptr)
{
	int	result;
	int	len;
	int	neg;
	int	i;
	int	special;

	result = 0;
	len = ft_strlen(nptr);
	while (nptr[len - 1] == ' ')
		len--;
	i = len;
	special = ft_check(nptr, special, i) - 1;
	if (ft_check(nptr, special, i) == 0)
		return (0);
	neg = ft_neg(nptr, i);
	i = len - special;
	while (i > 0)
	{
		if (nptr[i] != '-' || nptr[i] != ' ')
			result += ((nptr[len - i] - '0') * pow(10, i - 1));
		i--;
	}
	return (result * neg);
}
