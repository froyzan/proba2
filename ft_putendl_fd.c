/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denis <denis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/29 11:23:56 by fjewfish          #+#    #+#             */
/*   Updated: 2020/05/31 16:17:12 by denis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Parameters
** #1. The string to output.
** #2. The file descriptor on which to write.
** Description
** Outputs the string ’s’ to the given file
** descriptor, followed by a newline.
*/

void	ft_putendl_fd(char *s, int fd)
{
	if (s && fd >= 0)
	{
		ft_putstr_fd(s, fd);
		ft_putchar_fd('\n', fd);
	}
}
