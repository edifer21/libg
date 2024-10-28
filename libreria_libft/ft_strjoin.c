/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 12:26:07 by patferna          #+#    #+#             */
/*   Updated: 2024/10/22 02:12:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	s1_len;
	size_t	str2_len;
	size_t	ptr_len;

	if (!s1 && !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	str2_len = ft_strlen(s2);
	ptr_len = s1_len + str2_len;
	ptr = malloc(((ptr_len) + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	if (s1)
		ft_memcpy (ptr, s1, s1_len);
	if (s2)
		ft_memcpy (ptr + s1_len, s2, str2_len);
	ptr[ptr_len] = '\0';
	return (ptr);
}
