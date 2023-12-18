/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sspilka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 10:44:07 by sspilka           #+#    #+#             */
/*   Updated: 2023/06/27 13:19:12 by sspilka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	size;
	int	i;

	size = max - min;
	i = 0;
	if ((size) <= 0)
		return (NULL);
	array = (int *) malloc ((size) * sizeof (int));
	while (min != max)
	{
		array[i] = min;
		min++;
		i++;
	}
	return (array);
}

/* int	main(void)
{
	int	i;
	int	min;
	int	max;

	min = 2;
	max = 8;
	i = 0;
	while (i < max - min)
	{
		printf("%i", ft_range(min, max)[i]);
		i++;
	}
} */
