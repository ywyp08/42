/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sspilka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 14:31:52 by sspilka           #+#    #+#             */
/*   Updated: 2023/08/24 15:59:28 by sspilka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	big_len;
	size_t	little_len;

	i = 0;
	if (!big || !little)
		return (NULL);
	if (!little || !little[0])
		return ((char *)big);
	big_len = ft_strlen(big);
	little_len = ft_strlen(little);
	while (big[i] && i < n)
	{
		if (i + little_len > n || i + little_len > big_len)
			return (NULL);
		j = 0;
		while (big[i + j] == little[j])
		{
			if (j++ == little_len - 1)
				return ((char *)(big + i));
		}
		i++;
	}
	return (NULL);
}
