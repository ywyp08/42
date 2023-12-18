/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sspilka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 11:01:46 by sspilka           #+#    #+#             */
/*   Updated: 2023/06/12 12:14:21 by sspilka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_swap(int *a, int *b)
{
	int	a_val;
	int	b_val;

	a_val = *a;
	b_val = *b;
	*a = b_val;
	*b = a_val;
}
