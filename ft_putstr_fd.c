/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <ladawi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 13:54:51 by ladawi            #+#    #+#             */
/*   Updated: 2019/10/15 13:44:05 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	int		len;
	int		i;

	len = ft_strlen(s);
	i = 0;
	while (i < len && s[i] != '\0')
		ft_putchar_fd(s[i++], fd);
}
