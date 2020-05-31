/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjewfish <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/29 11:03:09 by fjewfish          #+#    #+#             */
/*   Updated: 2020/05/29 23:04:52 by fjewfish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Parameters
** #1. The adress of a pointer to an element.
** #2. The adress of the function used to iterate on
** the list.
** #3. The adress of the function used to delete the
** content of an element if needed.
** Description
** Iterates the list ’lst’ and applies the function
** ’f’ to the content of each element. Creates a new
** list resulting of the successive applications of
** the function ’f’. The ’del’ function is used to
** delete the content of an element if needed.
*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void *))
{
	t_list	*first;
	t_list	*new;

	first = NULL;
	while (lst)
	{
		if (!(new = ft_lstnew((*f)(lst->content))))
			ft_lstdelone(first, del);
		ft_lstadd_back(&first, new);
		lst = lst->next;
	}
	return (first);
}
