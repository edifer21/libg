/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patferna <patferna@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-26 15:29:28 by patferna          #+#    #+#             */
/*   Updated: 2024-09-26 15:29:28 by patferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *dest, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *) dest;
	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}
