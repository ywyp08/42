/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sspilka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 15:06:11 by sspilka           #+#    #+#             */
/*   Updated: 2023/09/27 16:00:44 by sspilka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_save(char const *s, char *sub_s, size_t len, unsigned int start)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
			sub_s[j++] = s[i];
		i++;
	}
	sub_s[j] = '\0';
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_s;

	if (start >= ft_strlen(s))
	{
		sub_s = (char *)malloc(1);
		sub_s[0] = '\0';
		return (sub_s);
	}
	if (len < ft_strlen(s) - start)
		sub_s = (char *)malloc(sizeof(char) * (len + 1));
	else
		sub_s = (char *)malloc(sizeof(char) * (ft_strlen(s) - start + 1));
	if (!sub_s)
		return (NULL);
	ft_save(s, sub_s, len, start);
	return (sub_s);
}
