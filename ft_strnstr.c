/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlaoli <carlaoli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 13:55:13 by carlaoli          #+#    #+#             */
/*   Updated: 2024/11/07 14:31:01 by carlaoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	big_i;
	size_t	little_j;

	big_i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[big_i] != '\0' && big_i < len)
	{
		little_j = 0;
		while (big[big_i + little_j] == little[little_j] \
		&& (big_i + little_j) < len)
		{
			little_j++;
			if (little[little_j] == '\0')
				return ((char *)&big[big_i]);
		}
		big_i++;
	}
	return (NULL);
}
