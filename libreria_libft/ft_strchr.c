/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patferna <patferna@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-28 19:32:30 by patferna          #+#    #+#             */
/*   Updated: 2024-10-28 19:32:30 by patferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	a;

	a = c;
	i = 0;
	while (s[i] != 0)
	{
		if (s[i] == a)
		{
			return ((char *) &s[i]);
		}
		i++;
	}
	if (a == 0)
	{
		return ((char *) &s[i]);
	}
	return (0);
}
