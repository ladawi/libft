/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 12:16:17 by ladawi            #+#    #+#             */
/*   Updated: 2019/10/08 12:33:14 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if (c <= 'Z' && c >= 'A')
		return (1);
	if (c <= 'z' && c >= 'a')
		return (1);
	return (0);
}
