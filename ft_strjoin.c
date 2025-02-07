/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlaoli <carlaoli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 15:01:41 by carlaoli          #+#    #+#             */
/*   Updated: 2024/11/02 17:56:37 by carlaoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr_s3;
	size_t	s1_len;
	size_t	s2_len;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	ptr_s3 = malloc((s1_len + s2_len +1) * sizeof(char));
	if (ptr_s3 == NULL)
		return (NULL);
	ft_strlcpy(ptr_s3, s1, s1_len + 1);
	ft_strlcat(ptr_s3, s2, s1_len + s2_len + 1);
	return (ptr_s3);
}
