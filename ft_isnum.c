/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlaoli <carlaoli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 18:01:27 by carlaoli          #+#    #+#             */
/*   Updated: 2025/02/01 14:24:01 by carlaoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isnum(char *c)
{
	int	i;
	int	check;

	i = 0;
	check = 0;
	while (c[i])
	{
		if (ft_isdigit(c[i]) == 1)
			check = 1;
		else
			return (0);
		i++;
	}
	return (check);
}
