/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readfile.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raleksan <raleksan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 21:21:00 by raleksan          #+#    #+#             */
/*   Updated: 2023/06/25 21:39:32 by raleksan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_write(char *str)
{
	size_t	len;
	int		i;

	i = 0;
	len = 0;
	while (str[i] != '\0')
	{
		i++;
		len++;
	}
	write(1, str, len);
}

void	ft_read_file(long dictionary, char *entry)
{
	size_t	dictionarysize;
	char	*dictentry;
	char	*dictionaryarray[4];

	dictionaryarray[0] = "zero";
	dictionaryarray[1] = "one";
	dictionaryarray[2] = "two";
	dictionaryarray[3] = "three";
	dictionarysize = sizeof(dictionaryarray) / sizeof(dictionaryarray[0]);
	if (dictionary >= 0 && dictionary < (long)dictionarysize)
	{
		dictentry = dictionaryarray[dictionary];
		ft_write(dictentry);
		ft_write(": ");
		ft_write(entry);
		ft_write("\n");
	}
	else
	{
		ft_write("Dictionary not found.\n");
	}
}
