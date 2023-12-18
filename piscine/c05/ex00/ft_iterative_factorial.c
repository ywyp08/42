/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sspilka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 10:49:09 by sspilka           #+#    #+#             */
/*   Updated: 2023/06/22 10:57:16 by sspilka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fact;

	fact = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		fact *= nb;
		nb--;
	}
	return (fact);
}

/* #include <stdio.h>

int	main(void)
{
	printf("%i", ft_iterative_factorial(8));
} */
