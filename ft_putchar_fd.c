/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denis <denis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/29 11:23:10 by fjewfish          #+#    #+#             */
/*   Updated: 2020/05/31 15:45:55 by denis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Parameters
** #1. The character to output.
** #2. The file descriptor on which to write.
** Description
** Outputs the character ’c’ to the given file
** descriptor.
*/

void	ft_putchar_fd(char c, int fd)
{
	if (fd >= 0)
	{
		write(fd, &c, 1);
	}
}
