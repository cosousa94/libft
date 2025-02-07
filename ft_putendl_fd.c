/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlaoli <carlaoli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 13:33:42 by carlaoli          #+#    #+#             */
/*   Updated: 2024/10/31 17:19:10 by carlaoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	char	*s_ptr;

	s_ptr = s;
	while (*s_ptr != '\0')
	{
		write(fd, s_ptr, 1);
		s_ptr++;
	}
	write(fd, "\n", 1);
}
