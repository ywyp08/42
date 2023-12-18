/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sspilka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 11:33:48 by sspilka           #+#    #+#             */
/*   Updated: 2023/08/30 13:15:58 by sspilka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num_e, size_t size_e)
{
	void	*ptr;
	size_t	total;

	total = num_e * size_e;
	if (num_e && ((size_t)(-1) / num_e) < size_e)
		return (0);
	ptr = (void *)malloc(total);
	if (!ptr)
		return (0);
	ft_bzero(ptr, total);
	return (ptr);
}
