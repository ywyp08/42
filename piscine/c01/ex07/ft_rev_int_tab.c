/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sspilka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 15:02:17 by sspilka           #+#    #+#             */
/*   Updated: 2023/06/15 12:37:16 by sspilka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 1;
	while (i <= (size / 2))
	{
		swap = tab[size - i];
		tab[size - i] = tab[i - 1];
		tab[i - 1] = swap;
		i++;
	}
}

/* int	main(void)
{
	int	tab[5] = {1, 2, 3, 4, 5};
	int	size;

	size = 5;
	ft_rev_int_tab(tab, size);
	printf("%d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4]);
} */
