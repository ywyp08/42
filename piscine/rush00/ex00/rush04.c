/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sspilka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 10:03:20 by sspilka           #+#    #+#             */
/*   Updated: 2023/06/10 12:33:19 by sspilka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	write_row(int x, char a, char b, char c)
{
	int	col;

	col = 1;
	while (col <= x)
	{
		if (col == 1)
		{
			ft_putchar(a);
		}
		else
		{
			if (col == x)
			{
				ft_putchar(c);
			}
			else
			{
				ft_putchar(b);
			}
		}
		col++;
	}
	write(1, "\n", 1);
}

void	rush(int x, int y)
{
	int	row;

	row = 1;
	while (row <= y)
	{
		if (row == 1)
		{
			write_row(x, 'A', 'B', 'C');
		}
		else
		{
			if (row == y)
			{
				write_row(x, 'C', 'B', 'A');
			}
			else
			{
				write_row(x, 'B', ' ', 'B');
			}
		}
		row++;
	}
}
