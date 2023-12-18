/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sspilka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 11:32:34 by sspilka           #+#    #+#             */
/*   Updated: 2023/06/19 13:19:37 by sspilka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int				diff;
	unsigned int	i;

	diff = 0;
	i = 0;
	while (s1[i] == s2[i] && i < n && s1[i] != '\0' && s2[i] != '\0')
		i++;
	if (s1[i] != s2[i] && i < n)
		diff = s1[i] - s2[i];
	return (diff);
}

// int	main(void)
// {
// 	char	str1[] = "ABC";
// 	char	str2[] = "ABCD";
// 	unsigned int	n;

// 	n = 4;
// 	printf("%d", ft_strncmp(str1, str2, n));
// }
