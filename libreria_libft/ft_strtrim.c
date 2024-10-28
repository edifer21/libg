/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patferna <patferna@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-22 09:47:25 by patferna          #+#    #+#             */
/*   Updated: 2024-10-22 09:47:25 by patferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len_s1;
	size_t	start;
	int		i;
	char	*ptr;

	start = 0;
	len_s1 = ft_strlen(s1);
	i = 0;
	while (s1[i] != '\0' && ft_strchr(set, s1[i]) != NULL)
	{
		i++;
	}
	start = i;
	while (len_s1 > start && ft_strchr(set, s1[len_s1 - 1]) != NULL)
	{
		len_s1--;
	}
	ptr = (char *)malloc(sizeof(char) * (len_s1 - start + 1));
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, &s1[start], len_s1 - start);
	ptr[len_s1 - start] = '\0';
	return (ptr);
}
