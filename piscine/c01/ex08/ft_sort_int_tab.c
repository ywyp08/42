/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sspilka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 12:38:01 by sspilka           #+#    #+#             */
/*   Updated: 2023/06/15 16:25:17 by sspilka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i <= size * size)
	{
		j = 0;
		while (j < size - 1)
		{
			if (tab[j] > tab[j + 1])
				swap(&tab[j], &tab[j + 1]);
			j++;
		}
		i++;
	}
}

/* int	main(void)
{
	int	arr_to_sort[] = {-9, -24, 8, -5, 4};
	int	size;

	size = 5;
	ft_sort_int_tab(arr_to_sort, size);
	printf("%d, %d, %d, %d, %d",
	arr_to_sort[0], arr_to_sort[1], arr_to_sort[2],
	arr_to_sort[3], arr_to_sort[4]);
} */
