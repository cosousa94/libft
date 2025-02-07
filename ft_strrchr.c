/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlaoli <carlaoli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 14:52:00 by carlaoli          #+#    #+#             */
/*   Updated: 2024/11/07 14:29:05 by carlaoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;

	ptr = NULL;
	while (*s != '\0')
	{
		if (*s == (unsigned char)c)
		{
			ptr = ((char *)s);
		}
		s++;
	}
	if (*s == (unsigned char)c)
	{
		return ((char *)s);
	}
	return (ptr);
}
