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

int	count_c( const char *s, char c)
{
	size_t		i;
	int			in_word;

	i = 0;
	in_word = 0;
	while (*s)
	{
		if (*s == c)
		{
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

void	*ft_free(char **split, size_t num)
{
	size_t	i;

	i = 0;
	while (i < num)
	{
		free(split[i]);
		i++;
	}
	free(split);
	return (NULL);
}

char	**ft_process_words(const char *s, char c, char **lst)
{
	size_t		word_len;
	size_t		i;
	const char	*start;

	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			start = s;
			while (*s && *s != c)
				s++;
			word_len = s - start;
			lst[i] = ft_substr(start, 0, word_len);
			if (!lst[i])
				return (ft_free(lst, i));
			i++;
		}
	}
	lst[i] = NULL;
	return (lst);
}

char	**ft_split(char const *s, char c)
{
	char	**arrstr;

	if (!s)
		return (NULL);
	arrstr = malloc((count_c(s, c) + 1) * sizeof(char *));
	if (!arrstr)
		return (NULL);
	put_array(arrstr, s, c);
	return (arrstr);
}
