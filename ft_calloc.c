/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denis <denis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/29 10:41:25 by fjewfish          #+#    #+#             */
/*   Updated: 2020/05/29 21:46:18 by denis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION
**      The calloc() function contiguously allocates enough space for count
**      objects that are size bytes of memory each and returns a pointer to the
**      allocated memory.  The allocated memory is filled with bytes of value
**      zero.
*/

void	*ft_calloc(size_t count, size_t size)
{
	void *mem;

	mem = malloc(count * size);
	if (mem == NULL)
		return (NULL);
	ft_memset(mem, 0, count * size);
	return (mem);
}
