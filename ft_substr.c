/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denis <denis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/29 11:42:03 by fjewfish          #+#    #+#             */
/*   Updated: 2020/05/31 15:37:44 by denis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Parameters
** #1. The string from which to create the substring.
** #2. The start index of the substring in the string
** ’s’.
** #3. The maximum length of the substring.
** Description
** Allocates (with malloc(3)) and returns a substring
** from the string ’s’.
** The substring begins at index ’start’ and is of
** maximum size ’len’.
*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	unsigned int	end;
	size_t			i;

	if (!s)
		return (NULL);
	end = start + len;
	i = 0;
	if (end <= ft_strlen(s))
	{
		substr = (char *)ft_calloc(len + 1, sizeof(char));
		if (substr == NULL)
			return (NULL);
		while (s[start] && start < end)
		{
			substr[i] = s[start];
			i++;
			start++;
		}
		substr[i] = 0;
	}
	else
		substr = NULL;
	return (substr);
}
