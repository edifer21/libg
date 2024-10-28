/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patferna <patferna@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-15 12:53:15 by patferna          #+#    #+#             */
/*   Updated: 2024-10-15 12:53:15 by patferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	little_len;

	little_len = ft_strlen(little);
	i = 0;
	if (*little == '\0')
	{
		return ((char *)big);
	}
	while (i < len && big[i])
	{
		if (ft_strncmp(&big[i], little, little_len) == '\0')
		{
			return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}
