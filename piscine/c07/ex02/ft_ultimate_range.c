/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sspilka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 11:45:46 by sspilka           #+#    #+#             */
/*   Updated: 2023/06/27 12:15:11 by sspilka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	i = 0;
	size = max - min;
	range[0] = (int *) malloc(size * sizeof (int));
	if (size <= 0)
	{
		*range = NULL;
		return (0);
	}
	while (min != max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (size);
}

/* int	main(void)
{
	int	i;
	int	min;
	int	max;
	int	*range;

	min = 2;
	max = 8;
	ft_ultimate_range(&range, min, max);
	i = 0;
	while (i < max - min)
	{
		printf("%i", range[i]);
		i++;
	}
} */
