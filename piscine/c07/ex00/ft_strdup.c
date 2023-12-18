/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sspilka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 10:23:58 by sspilka           #+#    #+#             */
/*   Updated: 2023/06/27 13:18:13 by sspilka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*new_str;
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (src[i] != '\0')
	{
		i++;
		len++;
	}
	new_str = (char *) malloc((len + 1) * sizeof (char));
	i = 0;
	if (len == 0)
		return (NULL);
	while (src[i] != '\0')
	{
		new_str[i] = src[i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

/* int	main(void)
{
	char	*original = "Hello World!";
	char	*duplicate;

	duplicate = ft_strdup(original);

	printf("Duplicate: %s", duplicate);
} */
