/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sspilka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 11:06:19 by sspilka           #+#    #+#             */
/*   Updated: 2023/06/22 11:14:04 by sspilka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	sum;

	sum = 1;
	if (power < 0)
		return (0);
	while (power > 0)
	{
		sum *= nb;
		power--;
	}
	return (sum);
}

/* #include <stdio.h>

int	main(void)
{
	printf("%i", ft_iterative_power(-3, 2));
} */
