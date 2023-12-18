/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sspilka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 14:13:54 by sspilka           #+#    #+#             */
/*   Updated: 2023/08/17 14:29:59 by sspilka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	unsigned int	len;
	char			*dup;

	len = ft_strlen(src) + 1;
	dup = (char *)malloc(len);
	if (dup != NULL)
		ft_strlcpy(dup, src, len);
	return (dup);
}
