/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sspilka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 12:49:05 by sspilka           #+#    #+#             */
/*   Updated: 2023/08/28 12:51:30 by sspilka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

static void	ft_strrev(char *str)
{
	size_t	len;
	size_t	i;
	char	tmp;

	len = ft_strlen(str);
	i = 0;
	while (i < len / 2)
	{
		tmp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = tmp;
		i++;
	}
}

static void	ft_save(char *str, int is_neg, int n)
{
	int	i;

	i = 0;
	if (n == 0)
		str[i++] = '0';
	while (n != 0)
	{
		str[i++] = '0' + ft_abs(n % 10);
		n /= 10;
	}
	if (is_neg == 1)
		str[i++] = '-';
	str[i] = '\0';
}

static int	ft_len(int n)
{
	size_t	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		len++;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		is_neg;
	size_t	len;

	len = ft_len(n);
	is_neg = 0;
	if (n < 0)
		is_neg = 1;
	str = (char *)malloc((len + 1) * sizeof(char));
	ft_save(str, is_neg, n);
	if (!str)
		return (NULL);
	ft_strrev(str);
	return (str);
}
