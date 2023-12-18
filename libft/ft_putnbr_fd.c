/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sspilka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 15:27:32 by sspilka           #+#    #+#             */
/*   Updated: 2023/08/28 13:14:59 by sspilka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

void	ft_putnbr_fd(int n, int fd)
{
	char	str[20];
	int		i;

	if (n == 0)
		write(fd, "0", 1);
	if (n < 0)
		write(fd, "-", 1);
	i = 0;
	while (n != 0)
	{
		str[i++] = '0' + ft_abs(n % 10);
		n /= 10;
	}
	while (i > 0)
		write(fd, &str[--i], 1);
}
