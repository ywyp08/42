/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sspilka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 12:16:28 by sspilka           #+#    #+#             */
/*   Updated: 2023/06/27 12:26:44 by sspilka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*out;
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	out = (char *) malloc(size * sizeof (char));
	while (strs[i])
	{
		j = 0;
		while (strs[i][j])
		{
			out[k] = strs[i][j];
			j++;
			k++;
		}
		out[k] = *sep;
		i++;
		k++;
	}
	return (out);
}
