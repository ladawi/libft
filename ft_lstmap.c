/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ladawi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 13:31:57 by ladawi            #+#    #+#             */
/*   Updated: 2019/10/23 14:01:00 by ladawi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void))
{
	t_list	nlist;

	if (lst == NULL)
		return (NULL);
	if (!(nlist = malloc(sizeof(t_list))))
	{
		ft_lstclear(nlist, del);
		return (NULL);
	}
	nlist->content = f(lst->content);
	if (lst->next != NULL)
		nlist->next = ft_lstmap(lst->next, f, del);
	else
		nlist->next = NULL;
	return (nlist);
}
