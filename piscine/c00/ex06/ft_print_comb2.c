/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sspilka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 09:38:38 by sspilka           #+#    #+#             */
/*   Updated: 2023/06/09 11:06:51 by sspilka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	write_number(char a, char b, char c, char d)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(' ');
	ft_putchar(c);
	ft_putchar(d);
	if (a == '9' && b == '8' && c == '9' && d == '9')
	{
	}
	else
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	number2(char a, char b, char c, char d)
{
	while (c <= '9')
	{
		while (d <= '9')
		{
			write_number(a, b, c, d);
			d++;
		}
		c++;
		d = '0';
	}
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = '0';
	b = '0';
	while (a <= '9')
	{
		while (b <= '9')
		{
			c = a;
			d = b + 1;
			number2(a, b, c, d);
			b++;
		}
		a++;
		b = '0';
	}	
}

/*int	main(void)
{
	ft_print_comb2();
}*/
