/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sspilka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 12:59:08 by sspilka           #+#    #+#             */
/*   Updated: 2023/06/14 12:59:12 by sspilka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	is_lowercase;

	is_lowercase = 1;
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
		}
		else
		{
			is_lowercase = 0;
		}
		str++;
	}
	return (is_lowercase);
}

// int	main(void)
// {
// 	char	*str1;
// 	char	*str0;

// 	str1 = "thisstringisalllowercase";
// 	str0 = "This string contains other things as well.";
// 	printf("%d", ft_str_is_lowercase(str1));
// }
