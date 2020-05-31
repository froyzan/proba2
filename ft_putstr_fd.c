/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denis <denis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/29 11:44:35 by fjewfish          #+#    #+#             */
/*   Updated: 2020/05/31 16:17:30 by denis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Parameters
** #1. The string to output.
** #2. The file descriptor on which to write.
** Description
** Outputs the string ’s’ to the given file
** descriptor.
*/

void	ft_putstr_fd(char *s, int fd)
{
	if (fd >= 0 && s)
	{
		write(fd, s, ft_strlen(s));
	}
}
