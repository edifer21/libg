/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patferna <patferna@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-01 11:10:57 by patferna          #+#    #+#             */
/*   Updated: 2024-10-01 11:10:57 by patferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	char			*ptd;
	char			*pts;

	i = n;
	ptd = (char *) dest;
	pts = (char *) src;
	if (ptd > pts)
	{
		i = n;
		while (i-- > 0)
			ptd[i] = pts[i];
	}
	else
	{
		i = 0;
		while (i < n)
		{
			ptd[i] = pts[i];
			i++;
		}
	}
	return (dest);
}
