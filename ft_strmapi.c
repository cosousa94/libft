/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlaoli <carlaoli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 13:25:05 by carlaoli          #+#    #+#             */
/*   Updated: 2024/11/02 17:58:29 by carlaoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	len_s;
	char			*ptr_s;
	int				i;

	if (s == NULL || f == NULL)
		return (NULL);
	len_s = ft_strlen(s);
	ptr_s = malloc((len_s + 1) * sizeof (char));
	if (ptr_s == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		ptr_s[i] = f(i, s[i]);
		i++;
	}
	ptr_s[i] = '\0';
	return (ptr_s);
}
