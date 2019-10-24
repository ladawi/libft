/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 14:09:26 by ladawi            #+#    #+#             */
/*   Updated: 2019/10/08 14:39:31 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	int		len;

	len = 0;
	ptr = (char *)s;
	while (*ptr++ != 0)
		len++;
	while (len--)
		if (*ptr == c)
			return (ptr);
		else
			ptr--;
	return (0);
}
