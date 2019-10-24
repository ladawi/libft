/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 15:06:37 by ladawi            #+#    #+#             */
/*   Updated: 2019/10/22 15:19:45 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	while (lst)
	{
		del(lst);
		free(lst->content);
		lst->next = NULL;
		lst = list->next;
	}
}
