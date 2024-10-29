/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patferna <patferna@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-30 09:56:31 by patferna          #+#    #+#             */
/*   Updated: 2024-09-30 09:56:31 by patferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*ptd;
	unsigned char	*pts;

	if (!dest && !src)
		return (NULL);
	ptd = (unsigned char *) dest;
	pts = (unsigned char *) src;
	i = 0;
	while (i < n)
	{
		ptd[i] = pts[i];
		i++;
	}
	return ((void *)dest);
}
