/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sspilka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 14:15:26 by sspilka           #+#    #+#             */
/*   Updated: 2023/06/14 12:57:58 by sspilka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	is_numeric;

	is_numeric = 1;
	while (*str != '\0')
	{
		if (*str >= '0' && *str <= '9')
		{
		}
		else
		{
			is_numeric = 0;
		}
		str++;
	}
	return (is_numeric);
}

/* int	main(void)
{
	char	*str1;
	char	*str0;

	str1 = "0123456789";
	str0 = "This string contains other things as well.";
	printf("%d", ft_str_is_numeric(str1));
} */
