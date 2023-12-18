/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sspilka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 14:10:59 by sspilka           #+#    #+#             */
/*   Updated: 2023/08/15 15:46:09 by sspilka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	int				diff;
	unsigned int	i;
	unsigned char	uc1;
	unsigned char	uc2;

	diff = 0;
	i = 0;
	while (s1[i] == s2[i] && i < n
		&& s1[i] != '\0' && s2[i] != '\0')
		i++;
	if (s1[i] != s2[i] && i < n)
	{
		uc1 = (unsigned char)s1[i];
		uc2 = (unsigned char)s2[i];
		diff = uc1 - uc2;
	}
	return (diff);
}
