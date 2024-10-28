/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patferna <patferna@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-11 11:00:43 by patferna          #+#    #+#             */
/*   Updated: 2024-10-11 11:00:43 by patferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	lenc;
	size_t	lend;
	size_t	i;

	lenc = ft_strlen(src);
	lend = ft_strlen(dest);
	i = 0;
	if (size <= lend)
	{
		return (size + lenc);
	}
	while (src[i] != '\0' && lend + i < size -1)
	{
		dest[lend + i] = src[i];
		i++;
	}
	dest[lend + i] = '\0';
	return (lend + lenc);
}
