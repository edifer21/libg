/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patferna <patferna@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-23 10:46:25 by patferna          #+#    #+#             */
/*   Updated: 2024-10-23 10:46:25 by patferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*put_word(const char *start, const char *ptr)
{
	size_t	len_word;
	char	*arrstr;

	len_word = ptr - start;
	arrstr = (char *) malloc ((len_word + 1) * sizeof(char));
	if (!arrstr)
		return (NULL);
	ft_memcpy(arrstr, start, len_word);
	arrstr[len_word] = '\0';
	return (arrstr);
}

int	count_c( const char *s, char c)
{
	int		i;
	size_t	in_word;

	i = 0;
	in_word = 0;
	while (*s == c)
		s++;
	while (*s != '\0')
	{
		if (*s == c)
		{
			if (in_word)
				in_word = 0;
		}
		else
		{
			if (!in_word)
			{
				in_word = 1;
				i++;
			}
		}
		s++;
	}
	return (i);
}

void	put_array(char **arrstr, const char *s, char c)
{
	const char	*start;
	int			i;

	i = 0;
	start = s;
	while (*s)
	{
		if (*s == c)
		{
			if (start < s)
			{
				arrstr[i++] = put_word(start, s);
			}
			start = s + 1;
		}
		s++;
	}
	if (start < s)
	{
		arrstr[i++] = put_word(start, s);
	}
	arrstr[i] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**arrstr;

	if (!s)
		return (0);
	arrstr = malloc((count_c(s, c) + 1) * sizeof(char *));
	if (!arrstr)
		return (NULL);
	put_array(arrstr, s, c);
	return (arrstr);
}
