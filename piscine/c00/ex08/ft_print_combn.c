/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sspilka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 17:06:11 by sspilka           #+#    #+#             */
/*   Updated: 2023/06/28 18:24:12 by sspilka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	g_nbr[10];

// write the number
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(char g_nbr[10], int last)
{
	int	i;

	i = 1;
	ft_putchar(g_nbr[0] + '0');
	while (g_nbr[i] != '\0')
	{
		ft_putchar(g_nbr[i] + '0');
		i++;
	}
	if (last != 1)
		write (1, ", ", 1);
}

// update the number
void	ft_update(char g_nbr[10], int n, int i)
{
	if (g_nbr[n] == 9 - i)
	{
		ft_update(g_nbr, n - 1, i + 1);
		g_nbr[n] = g_nbr[n - 1] + 1;
	}
	else
	{
		ft_putnbr(g_nbr, 0);
		g_nbr[n] += 1;
	}
}

// initialize the number
void	ft_print_combn(int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		g_nbr[i] = i;
		i++;
	}
	while (g_nbr[0] != 10 - n)
		ft_update(g_nbr, n - 1, 0);
	ft_putnbr(g_nbr, 1);
}

/* int	main(void)
{
	int	n;

	n = 5;
	ft_print_combn(n);
} */
