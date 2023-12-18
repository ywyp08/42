/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sspilka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 12:59:08 by sspilka           #+#    #+#             */
/*   Updated: 2023/06/14 12:59:12 by sspilka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	is_printable;

	is_printable = 1;
	while (*str != '\0')
	{
		if (*str >= ' ' && *str <= '~')
		{
		}
		else
		{
			is_printable = 0;
		}
		str++;
	}
	return (is_printable);
}

// int	main(void)
// {
// 	char	*str1;
// 	char	*str0;

// 	str1 = "This: '$~B*B' is a printable string.";
// 	str0 = "This string contains \n as well. ";
// 	printf("%d", ft_str_is_printable(str1));
// }
