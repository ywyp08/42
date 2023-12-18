/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sspilka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 12:59:08 by sspilka           #+#    #+#             */
/*   Updated: 2023/06/14 12:59:12 by sspilka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	is_uppercase;

	is_uppercase = 1;
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
		{
		}
		else
		{
			is_uppercase = 0;
		}
		str++;
	}
	return (is_uppercase);
}

// int	main(void)
// {
// 	char	*str1;
// 	char	*str0;

// 	str1 = "THISSTRINGISALLUPPERCASE";
// 	str0 = "This string contains other things as well.";
// 	printf("%d", ft_str_is_uppercase(str0));
// }
