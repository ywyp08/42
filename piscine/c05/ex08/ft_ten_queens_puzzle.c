/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sspilka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 12:38:11 by sspilka           #+#    #+#             */
/*   Updated: 2023/06/22 14:32:06 by sspilka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_write(int solution[10])
{
	int	i;

	i = 0;
	while (i < 10)
	{
		ft_putchar(solution[i] + '0');
		i++;
	}
	write(1, "\n", 1);
}

int	ft_check(int solution[10], int row, int col)
{
	int	i;

	i = 1;
	while (col - i >= 0)
	{
		if ((row == solution[col - i]
				|| row + i == solution[col - i]
				|| row - i == solution[col - i]))
			return (0);
		i++;
	}
	return (1);
}

void	ft_add_col(int solution[10], int row, int col, int *n_sol)
{
	while (row < 10)
	{
		if (ft_check(solution, row, col))
		{
			solution[col] = row;
			ft_add_col(solution, 0, col + 1, n_sol);
			if (col == 9)
			{
				ft_write(solution);
				*n_sol += 1;
			}
		}
		row++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	solution[10];
	int	n_sol;

	n_sol = 0;
	ft_add_col(solution, 0, 0, &n_sol);
	return (n_sol);
}

/* #include <stdio.h>

int	main(void)
{
	printf("%i",ft_ten_queens_puzzle());
} */
