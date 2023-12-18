/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sspilka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 11:16:28 by sspilka           #+#    #+#             */
/*   Updated: 2023/06/19 11:29:46 by sspilka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	diff;

	diff = 0;
	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	if (s1[i] != s2[i])
	{
		diff = s1[i] - s2[i];
	}
	return (diff);
}

// int	main(void)
// {
// 	char	str1[] = "ABC";
// 	char	str2[] = "ABCD";

// 	printf("%d", ft_strcmp(str1, str2));
// }
