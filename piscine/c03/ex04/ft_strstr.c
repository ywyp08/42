/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sspilka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 12:08:03 by sspilka           #+#    #+#             */
/*   Updated: 2023/06/19 12:29:47 by sspilka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	str_start;
	int	i;

	str_start = 0;
	i = 0;
	while (str[str_start] != '\0')
	{
		while (to_find[i] != '\0' && str[str_start + i] == to_find[i])
			i++;
		if (to_find[i] == '\0')
			return (&str[str_start]);
		if (i == 0)
			str_start++;
		else
		{
			str_start += i;
			i = 0;
		}
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	str1[] = "I want to find HiMom this.";
// 	char	to_find[] = "HiMom";

// 	printf("%s", ft_strstr(str1, to_find));
// }
