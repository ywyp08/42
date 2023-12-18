/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sspilka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 14:15:26 by sspilka           #+#    #+#             */
/*   Updated: 2023/06/14 12:56:19 by sspilka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	is_alpha;

	is_alpha = 1;
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
		}
		else if (*str >= 'A' && *str <= 'Z')
		{
		}
		else
		{
			is_alpha = 0;
		}
		str++;
	}
	return (is_alpha);
}

/*int	main(void)
{
	char	*str1;
	char	*str0;

	str1 = "ThisStringContainsOnlyAlphabeticalCharacters";
	str0 = "This string contains other things as well.";
	printf("%d", ft_str_is_alpha(str0));
}*/
