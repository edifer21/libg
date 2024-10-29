/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patferna <patferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 17:21:49 by patferna          #+#    #+#             */
/*   Updated: 2024/10/28 18:09:27 by patferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_num_len(int n)
{
	int	len;

	if (n == 0)
		return (1);
	len = (n <= 0);
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*ptr;

	if (n == -2147483648)
		return (strdup("-2147483648"));
	len = get_num_len(n);
	ptr = (char *)malloc(len + 1);
	if (!ptr)
		return (NULL);
	ptr[len] = '\0';
	if (n < 0)
	{
		ptr[0] = '-';
		n = -n;
	}
	while (len-- && n)
	{
		ptr[len] = (n % 10) + '0';
		n /= 10;
	}
	return (ptr);
}
