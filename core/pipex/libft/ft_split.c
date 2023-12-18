/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sspilka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 12:22:49 by sspilka           #+#    #+#             */
/*   Updated: 2023/08/30 13:26:18 by sspilka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(const char *s, char c)
{
	size_t	count;
	int		in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s == c)
			in_word = 0;
		else if (!in_word)
		{
			in_word = 1;
			count++;
		}
		s++;
	}
	return (count);
}

static void	ft_save(char **arr, char const *s, size_t *len, size_t *j)
{
	char	*dst;

	dst = (char *)malloc(*len + 1);
	if (!dst)
		return ;
	dst = ft_memcpy(dst, s, *len);
	dst[*len] = '\0';
	arr[*j] = dst;
	(*j)++;
	*len = 0;
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = 0;
	len = 0;
	arr = (char **)malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] != c)
			len++;
		else if (len > 0)
			ft_save(arr, s + i - len, &len, &j);
		i++;
	}
	if (len > 0)
		ft_save(arr, s + i - len, &len, &j);
	arr[j] = NULL;
	return (arr);
}
