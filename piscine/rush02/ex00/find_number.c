/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_number.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raleksan <raleksan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 15:17:19 by sspilka           #+#    #+#             */
/*   Updated: 2023/06/25 21:41:34 by raleksan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_read_x(unsigned int nb)
{
	char	*units[10];

	units[0] = "";
	units[1] = "one";
	units[2] = "two";
	units[3] = "three";
	units[4] = "four";
	units[5] = "five";
	units[6] = "six";
	units[7] = "seven";
	units[8] = "eight";
	units[9] = "nine";
	if (nb > 0)
	{
		write(1, units[nb], strlen(units[nb]));
		write(1, " ", 1);
	}
}

void	ft_read_xo(unsigned int nb)
{
	char	*tens[10];

	if (nb >= 2 && nb <= 9)
	{
		tens[0] = "";
		tens[1] = "";
		tens[2] = "twenty";
		tens[3] = "thirty";
		tens[4] = "forty";
		tens[5] = "fifty";
		tens[6] = "sixty";
		tens[7] = "seventy";
		tens[8] = "eighty";
		tens[9] = "ninety";
		write(1, tens[nb], strlen(tens[nb]));
		write(1, " ", 1);
	}
}

void	ft_read_xx(unsigned int nb)
{
	if (nb >= 20)
	{
		ft_read_xo(nb / 10);
		ft_read_x(nb % 10);
	}
	if (nb >= 10 && nb <= 19)
	{
		ft_read_xo(nb / 10);
		write(1, "ten", 3);
		ft_read_x(nb % 10);
		ft_read_x(nb);
	}
	else if (nb > 0)
	{
		ft_read_x(nb);
	}
}

void	ft_read_hundred(unsigned int nb)
{
	if (nb / 100 >= 1)
	{
		ft_read_xx(nb / 100);
		write(1, "hundred ", 8);
	}
	ft_read_xx(nb % 100);
}

void	ft_read_number(long dictionary, long nb)
{
	if (nb / 1000000000 >= 1)
	{
		ft_read_hundred(nb / 1000000000);
		ft_read_file(dictionary, "1000000000");
	}
	if (nb / 1000000 >= 1)
	{
		ft_read_hundred((nb / 1000000) % 1000);
		ft_read_file(dictionary, "1000000");
	}
	if (nb / 1000 >= 1)
	{
		ft_read_hundred((nb / 1000) % 1000);
		ft_read_file(dictionary, "1000");
	}
	ft_read_hundred(nb % 1000);
	if (nb == 0)
	{
		ft_read_file(dictionary, "0");
	}
}
