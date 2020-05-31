/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denis <denis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/28 06:46:22 by fjewfish          #+#    #+#             */
/*   Updated: 2020/05/31 15:44:18 by denis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Parameters
** #1. The string to be trimmed.
** #2. The reference set of characters to trim.
** Description
** Allocates (with malloc(3)) and returns a copy of
** ’s1’ with the characters specified in ’set’ removed
** from the beginning and the end of the string.
*/

int		ft_check_cymbol(char const c, char const *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	if (!s1)
		return (ft_substr(s1, 0, 0));
	if (!set)
		return (ft_strdup(s1));
	start = 0;
	end = ft_strlen(s1) - 1;
	while (ft_check_cymbol(s1[start], set) && s1[start])
		start++;
	while (ft_check_cymbol(s1[end], set) && end)
		end--;
	if (start < end)
		return (ft_substr(s1, start, end - start + 1));
	else
		return (ft_substr(s1, 0, 0));
}
